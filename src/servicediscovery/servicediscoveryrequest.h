// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYREQUEST_H
#define QTAWS_SERVICEDISCOVERYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsservicediscoveryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ServiceDiscoveryRequest : public QtAws::Core::AwsAbstractRequest {

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
        UpdateHttpNamespaceAction,
        UpdateInstanceCustomHealthStatusAction,
        UpdatePrivateDnsNamespaceAction,
        UpdatePublicDnsNamespaceAction,
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
    explicit ServiceDiscoveryRequest(ServiceDiscoveryRequestPrivate * const d);
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
