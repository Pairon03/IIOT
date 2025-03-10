<script setup lang="ts">
import { Device } from '@/models/devices';
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


</script>

<template>
    <h1>Seus Dispositivos: </h1>
    
    <div>        
        <h5>{{ ar.name }}</h5>
        <span class="icons material-icons-round">{{ ar.icon }}</span>
        <div :class="`button-${ar.state}`">
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