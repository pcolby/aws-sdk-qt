// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGAPPREGISTRYREQUEST_H
#define QTAWS_SERVICECATALOGAPPREGISTRYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsservicecatalogappregistryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ServiceCatalogAppRegistryRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ServiceCatalogAppRegistryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServiceCatalogAppRegistry.
    enum Action {
        AssociateAttributeGroupAction,
        AssociateResourceAction,
        CreateApplicationAction,
        CreateAttributeGroupAction,
        DeleteApplicationAction,
        DeleteAttributeGroupAction,
        DisassociateAttributeGroupAction,
        DisassociateResourceAction,
        GetApplicationAction,
        GetAssociatedResourceAction,
        GetAttributeGroupAction,
        ListApplicationsAction,
        ListAssociatedAttributeGroupsAction,
        ListAssociatedResourcesAction,
        ListAttributeGroupsAction,
        ListAttributeGroupsForApplicationAction,
        ListTagsForResourceAction,
        SyncResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateAttributeGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServiceCatalogAppRegistryRequest(const Action action);
    ServiceCatalogAppRegistryRequest(const ServiceCatalogAppRegistryRequest &other);
    ServiceCatalogAppRegistryRequest &operator=(const ServiceCatalogAppRegistryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServiceCatalogAppRegistryRequest &other) const;


protected:
    /// @cond internal
    explicit ServiceCatalogAppRegistryRequest(ServiceCatalogAppRegistryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceCatalogAppRegistryRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
