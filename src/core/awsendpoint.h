// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
