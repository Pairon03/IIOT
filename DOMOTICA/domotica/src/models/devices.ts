
export class Device {
    name: string = '';
    value: boolean = false;
}

export class Environment {
    name: string = '';
    devices: Array<Device> = [];    
}