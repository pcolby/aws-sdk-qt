/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSENDPOINT_H
#define AWSENDPOINT_H

#include "qtawscoreglobal.h"

#include <QFlag>
#include <QStringList>
#include <QUrl>

namespace QtAws {
namespace Core {

class AwsEndpointPrivate;

class QTAWSCORE_EXPORT AwsEndpoint {

public:
    enum Transport {
        HTTP  = 0x01,
        HTTPS = 0x02,
        SMTP  = 0x04,
        AnyTransport = HTTP|HTTPS|SMTP
    };
    Q_DECLARE_FLAGS(Transports, Transport)

    explicit AwsEndpoint(const QByteArray &hostName);
    explicit AwsEndpoint(const QString &hostName);

    ~AwsEndpoint();

    static QUrl getEndpoint(const QString &regionName, const QString &serviceName,
                            const Transports transport = AnyTransport);

    static bool isSupported(const QString &regionName, const QString &serviceName,
                            const Transports transport = AnyTransport);

    bool isSupported(const Transport transport) const;

    bool isValid() const;

    QString fullServiceName() const;
    static QString fullServiceName(const QString &serviceName);

    QString hostName() const;

    QString regionName() const;

    QString serviceName() const;

    QStringList supportedRegions(const Transports transport = AnyTransport) const;

    static QStringList supportedRegions(const QString &serviceName,
                                        const Transports transport = AnyTransport);

    static QStringList supportedServices(const QString &regionName,
                                         const Transports transport = AnyTransport);

private:
    Q_DECLARE_PRIVATE(AwsEndpoint)
    Q_DISABLE_COPY(AwsEndpoint)
    AwsEndpointPrivate * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsEndpoint;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(AwsEndpoint::Transports)

} // namespace Core
} // namespace QtAws

#endif
