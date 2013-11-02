/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSENDPOINT_H
#define AWSSENDPOINT_H

#include "qtawsglobal.h"

#include <QFlag>
#include <QStringList>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

class AwsEndpointPrivate;

class QTAWS_EXPORT AwsEndpoint {

public:
    /// Network transport supported by one or more AWS endpoints.
    enum Transport {
        HTTP  = 0x01,
        HTTPS = 0x02,
        SMTP  = 0x04,
        AnyTransport = HTTP|HTTPS|SMTP
    };
    Q_DECLARE_FLAGS(Transports, Transport)

    AwsEndpoint(const QByteArray &hostName);
    AwsEndpoint(const QString &hostName);

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
    AwsEndpointPrivate * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsEndpoint;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(AwsEndpoint::Transports)

QTAWS_END_NAMESPACE

#endif
