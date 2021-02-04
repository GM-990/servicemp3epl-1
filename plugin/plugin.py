#!/usr/bin/python
# -*- coding: utf-8 -*-
from Plugins.Plugin import PluginDescriptor

def autostart(reason, **kwargs):
    from Plugins.SystemPlugins.Servicelibpl import servicelibpl

def Plugins(**kwargs):
    return [
            PluginDescriptor(where=PluginDescriptor.WHERE_AUTOSTART, needsRestart=True, fnc=autostart)
    ]
