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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SERVICEDISCOVERYREQUEST_H
#define QTAWS_SERVICEDISCOVERYREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryRequestPrivate;

class QTAWS_EXPORT ServiceDiscoveryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServiceDiscovery.
    enum Action {
        CreateHttpNamespaceAction,
        CreatePrivateDnsNamespaceAction,
        CreatePublicDnsNamespaceAction,
        CreateServiceAction,
        DeleteNamespaceAction,
        DeleteServiceAction,
        DeregisterInstanceAction,
        DiscoverInstancesAction,
        GetInstanceAction,
        GetInstancesHealthStatusAction,
        GetNamespaceAction,
        GetOperationAction,
        GetServiceAction,
        ListInstancesAction,
        ListNamespacesAction,
        ListOperationsAction,
        ListServicesAction,
        ListTagsForResourceAction,
        RegisterInstanceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateInstanceCustomHealthStatusAction,
        UpdateServiceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServiceDiscoveryRequest(const Action action);
    ServiceDiscoveryRequest(const ServiceDiscoveryRequest &other);
    ServiceDiscoveryRequest &operator=(const ServiceDiscoveryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServiceDiscoveryRequest &other) const;


protected:
    /// @cond internal
    ServiceDiscoveryRequestPrivate * const d_ptr; ///< Internal d-pointer.
    ServiceDiscoveryRequest(ServiceDiscoveryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceDiscoveryRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
