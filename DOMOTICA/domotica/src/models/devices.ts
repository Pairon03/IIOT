
export class Device {
    name: string = '';
    state: boolean = false;
    icon: string = ''
}

export class Environment {
    name: string = '';
    devices: Array<Device> = [];    
}

const lampada = new Device();
lampada.name = 'led mesa escritorio';

const ventilador = new Device();
ventilador.name = 'ventilador de teto';

const quarto = new Environment();
quarto.name = 'quarto';
quarto.devices = [lampada,ventilador];
