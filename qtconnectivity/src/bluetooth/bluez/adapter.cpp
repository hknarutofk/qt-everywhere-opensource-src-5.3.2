/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p adapter_p.h:adapter.cpp org.bluez.all.xml org.bluez.Adapter
 *
 * Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "adapter_p.h"

/*
 * Implementation of interface class OrgBluezAdapterInterface
 */

OrgBluezAdapterInterface::OrgBluezAdapterInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgBluezAdapterInterface::~OrgBluezAdapterInterface()
{
}
