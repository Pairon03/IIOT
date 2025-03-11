<script setup lang="ts">
import { Device, Environment } from '@/models/devices';
import { ref, reactive } from 'vue';

const ar: Device = reactive(new Device());
ar.name = 'Ar condicionado Samsung';
ar.state = true;
ar.icon = 'mode_cool';

const tv: Device = reactive(new Device());
tv.name = 'Smart TV LG';
tv.icon = 'tv';

const iluminacao: Device = reactive(new Device());
iluminacao.name = 'Lâmpada Led';
iluminacao.state = true;
iluminacao.icon = 'light';

const sala: Environment = reactive(new Environment())
sala.name = 'Sala de Estar';
sala.devices = [ ar, tv, iluminacao];

const tomada: Device = reactive(new Device());
tomada.name = 'Tomada inteligente';
tomada.state = false;
tomada.icon = 'power';

const quarto: Environment = reactive(new Environment())
quarto.name = 'Quarto de Hóspedes';
quarto.devices = [ tomada ];

const environments: Array<Environment> = reactive([]);
environments.push(sala);
environments.push(quarto);

</script>

<template>
    <h1>Seus Dispositivos: </h1>
    
    <div v-for="(currentDevice, id) in sala.devices" :key="id">        
        <h5>{{ currentDevice.name }}</h5>
        <span class="icons material-icons-round">{{ currentDevice.icon }}</span>
        <div :class="`button-${currentDevice.state}`">
            <button class="on">ON</button>
            <button class="off">OFF</button>
        </div>      
    </div>
    
</template>

<style scoped lang="scss">
    .button-true{
        .on{
            background-color: green;
        }
        .off{
            background-color: white;
        }
    }
    .button-false{
        .on{
            background-color: white;
        }
        .off{
            background-color: red;
        }
    }
</style>