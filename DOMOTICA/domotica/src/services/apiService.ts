import { CreatedItem, NewEnvironment, NewField } from "@/models/devices";
import { getApiAxios } from "./services.config";

export const saveEnvironment = (name:string): Promise<CreatedItem> => {

    const env = new NewEnvironment();
    env.name.pt = name;
    const field = new NewField<NewEnvironment>(env);

    return getApiAxios().post("/",field,{
        headers: {
            "X-Contentful-Content-Type": "environment"
        }
    });   
}

export const publish = (id:string, version:number = 1): Promise<void> => {

        return getApiAxios().put(`/${id}/published`,undefined,{
            headers: {
                "X-Contentful-Version": version
            }
        });   
}
