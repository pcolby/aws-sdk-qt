// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawscoreglobal.h"

#include "awsendpoint.h"

#include <QMutex>
#include <QString>
#include <QStringList>
#include <QXmlStreamReader>
#include <QVariant>

namespace QtAws {
namespace Core {

class AwsEndpoint;

class AwsEndpointPrivate {

public:
    QString hostName;    ///< This endpoint's hostname.
    QString regionName;  ///< This endpoint's region name.
    QString serviceName; ///< This endpoint's service name.

    explicit AwsEndpointPrivate(AwsEndpoint * const q);

protected:
    /// The per-host information to load from the endpoints.xml file.
    struct HostInfo {
        QStringList regionNames; ///< AWS regions supported by the host.
        QString serviceName;     ///< AWS service supported by the host.
    };

    /// The per-region endpoint-specific information to load from the endpoints.xml file.
    struct RegionEndpointInfo {
        QString hostName;                   ///< AWS endpoint's hostname.
        AwsEndpoint::Transports transports; ///< Transports supported by this AWS endpoint.
    };

    /// Hash of service names to RegionEndpointInfo.
    typedef QHash<QString, RegionEndpointInfo> RegionServices;

    /// The per-region information to load from the endpoints.xml file.
    struct RegionInfo {
        RegionServices services; ///< AWS services supported by the AWS region.
    };

    /// The per-service information to load from the endpoints.xml file.
    struct ServiceInfo {
        QString fullName;        ///< AWS service's full human-friendly name.
        QStringList regionNames; ///< AWS regions support by this service.
    };

    static QHash<QString, HostInfo> hosts;
    static QHash<QString, RegionInfo> regions;
    static QHash<QString, ServiceInfo> services;

    static QMutex mutex;

    static void loadEndpointData(const QString &fileName = QLatin1String(":/aws/endpoints.xml"));
    static void loadEndpointData(QIODevice &device);
    static void loadEndpointData(QXmlStreamReader &xml);
    static void parseRegion(QXmlStreamReader &xml);
    static void parseRegions(QXmlStreamReader &xml);
    static void parseService(QXmlStreamReader &xml);
    static void parseServices(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AwsEndpoint)
    Q_DISABLE_COPY(AwsEndpointPrivate)
    AwsEndpoint * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsEndpoint;
    friend class TestAwsSignatureV4;
};

} // namespace Core
} // namespace QtAws

#endif
