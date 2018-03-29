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

#ifndef QTAWS_ROUTE53DOMAINSCLIENTREQUEST_H
#define QTAWS_ROUTE53DOMAINSCLIENTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace AWS {

namespace Route53Domains {

class AwsAbstractClient;
class Route53DomainsClientRequestPrivate;

class QTAWS_EXPORT Route53DomainsClientRequest : public AwsAbstractRequest {

public:
    /// Actions supported by Route53Domains.
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53DomainsClientRequest(const Action action);
    Route53DomainsClientRequest(const Route53DomainsClientRequest &other);
    Route53DomainsClientRequest &operator=(const Route53DomainsClientRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53DomainsClientRequest &other) const;


protected:
    /// @cond internal
    Route53DomainsClientRequest(Route53DomainsClientRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(Route53DomainsClientRequest)

}

} // namespace Route53Domains
} // namespace AWS

#endif
