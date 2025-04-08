import axios, {AxiosHeaders, type AxiosResponse} from "axios";
export const BASE_URL = import.meta.env.CONTENTFUL_BASE_ENDPOINT;


export const getAxios = (target:'cdn'|'api', token:String, headers: AxiosHeaders)=> {
    headers.set('Authorization', `Bearer ${token}`);
    headers.set('Content-Type', 'application/json');

    const createdAxios = axios.create({
        baseURL: `https://${target}${BASE_URL}`,
        timeout: 4000,
        headers: headers
    });
    createdAxios.interceptors.response.use(getAxiosResponse);
    return createdAxios;
}

const getAxiosResponse = (response:AxiosResponse)=> {
    return response.data;
}