<script setup lang="ts">
import DeviceComponent from '@/components/DeviceComponent.vue';
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

    <div v-for="(currentEnvironment, envId) in environments" :key="envId">
        <h3>{{ currentEnvironment.name }}</h3>
        <div v-for="(currentDevice, id) in currentEnvironment.devices" :key="id">        
            <DeviceComponent :device="currentDevice"/>    
        </div>    
        <hr>
    </div>
    
</template>

<style scoped lang="scss">
   
</style>