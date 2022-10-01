// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSREQUEST_H
#define QTAWS_GREENGRASSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgreengrassglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Greengrass {

class GreengrassRequestPrivate;

class QTAWSGREENGRASS_EXPORT GreengrassRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Greengrass.
    enum Action {
        AssociateRoleToGroupAction,
        AssociateServiceRoleToAccountAction,
        CreateConnectorDefinitionAction,
        CreateConnectorDefinitionVersionAction,
        CreateCoreDefinitionAction,
        CreateCoreDefinitionVersionAction,
        CreateDeploymentAction,
        CreateDeviceDefinitionAction,
        CreateDeviceDefinitionVersionAction,
        CreateFunctionDefinitionAction,
        CreateFunctionDefinitionVersionAction,
        CreateGroupAction,
        CreateGroupCertificateAuthorityAction,
        CreateGroupVersionAction,
        CreateLoggerDefinitionAction,
        CreateLoggerDefinitionVersionAction,
        CreateResourceDefinitionAction,
        CreateResourceDefinitionVersionAction,
        CreateSoftwareUpdateJobAction,
        CreateSubscriptionDefinitionAction,
        CreateSubscriptionDefinitionVersionAction,
        DeleteConnectorDefinitionAction,
        DeleteCoreDefinitionAction,
        DeleteDeviceDefinitionAction,
        DeleteFunctionDefinitionAction,
        DeleteGroupAction,
        DeleteLoggerDefinitionAction,
        DeleteResourceDefinitionAction,
        DeleteSubscriptionDefinitionAction,
        DisassociateRoleFromGroupAction,
        DisassociateServiceRoleFromAccountAction,
        GetAssociatedRoleAction,
        GetBulkDeploymentStatusAction,
        GetConnectivityInfoAction,
        GetConnectorDefinitionAction,
        GetConnectorDefinitionVersionAction,
        GetCoreDefinitionAction,
        GetCoreDefinitionVersionAction,
        GetDeploymentStatusAction,
        GetDeviceDefinitionAction,
        GetDeviceDefinitionVersionAction,
        GetFunctionDefinitionAction,
        GetFunctionDefinitionVersionAction,
        GetGroupAction,
        GetGroupCertificateAuthorityAction,
        GetGroupCertificateConfigurationAction,
        GetGroupVersionAction,
        GetLoggerDefinitionAction,
        GetLoggerDefinitionVersionAction,
        GetResourceDefinitionAction,
        GetResourceDefinitionVersionAction,
        GetServiceRoleForAccountAction,
        GetSubscriptionDefinitionAction,
        GetSubscriptionDefinitionVersionAction,
        GetThingRuntimeConfigurationAction,
        ListBulkDeploymentDetailedReportsAction,
        ListBulkDeploymentsAction,
        ListConnectorDefinitionVersionsAction,
        ListConnectorDefinitionsAction,
        ListCoreDefinitionVersionsAction,
        ListCoreDefinitionsAction,
        ListDeploymentsAction,
        ListDeviceDefinitionVersionsAction,
        ListDeviceDefinitionsAction,
        ListFunctionDefinitionVersionsAction,
        ListFunctionDefinitionsAction,
        ListGroupCertificateAuthoritiesAction,
        ListGroupVersionsAction,
        ListGroupsAction,
        ListLoggerDefinitionVersionsAction,
        ListLoggerDefinitionsAction,
        ListResourceDefinitionVersionsAction,
        ListResourceDefinitionsAction,
        ListSubscriptionDefinitionVersionsAction,
        ListSubscriptionDefinitionsAction,
        ListTagsForResourceAction,
        ResetDeploymentsAction,
        StartBulkDeploymentAction,
        StopBulkDeploymentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConnectivityInfoAction,
        UpdateConnectorDefinitionAction,
        UpdateCoreDefinitionAction,
        UpdateDeviceDefinitionAction,
        UpdateFunctionDefinitionAction,
        UpdateGroupAction,
        UpdateGroupCertificateConfigurationAction,
        UpdateLoggerDefinitionAction,
        UpdateResourceDefinitionAction,
        UpdateSubscriptionDefinitionAction,
        UpdateThingRuntimeConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GreengrassRequest(const Action action);
    GreengrassRequest(const GreengrassRequest &other);
    GreengrassRequest &operator=(const GreengrassRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GreengrassRequest &other) const;


protected:
    /// @cond internal
    explicit GreengrassRequest(GreengrassRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GreengrassRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
