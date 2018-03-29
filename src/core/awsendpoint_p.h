/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawsglobal.h"

#include "awsendpoint.h"

#include <QMutex>
#include <QString>
#include <QStringList>
#include <QXmlStreamReader>
#include <QVariant>

namespace QtAws {
namespace Client {

class AwsEndpoint;

class QTAWS_EXPORT AwsEndpointPrivate {

public:
    QString hostName;    ///< This endpoint's hostname.
    QString regionName;  ///< This endpoint's region name.
    QString serviceName; ///< This endpoint's service name.

    AwsEndpointPrivate(AwsEndpoint * const q);

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

} // namespace Client
} // namespace QtAws

#endif
