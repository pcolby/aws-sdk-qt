// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONREQUEST_H
#define QTAWS_PROTONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsprotonglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Proton {

class ProtonRequestPrivate;

class QTAWSPROTON_EXPORT ProtonRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Proton.
    enum Action {
        AcceptEnvironmentAccountConnectionAction,
        CancelComponentDeploymentAction,
        CancelEnvironmentDeploymentAction,
        CancelServiceInstanceDeploymentAction,
        CancelServicePipelineDeploymentAction,
        CreateComponentAction,
        CreateEnvironmentAction,
        CreateEnvironmentAccountConnectionAction,
        CreateEnvironmentTemplateAction,
        CreateEnvironmentTemplateVersionAction,
        CreateRepositoryAction,
        CreateServiceAction,
        CreateServiceTemplateAction,
        CreateServiceTemplateVersionAction,
        CreateTemplateSyncConfigAction,
        DeleteComponentAction,
        DeleteEnvironmentAction,
        DeleteEnvironmentAccountConnectionAction,
        DeleteEnvironmentTemplateAction,
        DeleteEnvironmentTemplateVersionAction,
        DeleteRepositoryAction,
        DeleteServiceAction,
        DeleteServiceTemplateAction,
        DeleteServiceTemplateVersionAction,
        DeleteTemplateSyncConfigAction,
        GetAccountSettingsAction,
        GetComponentAction,
        GetEnvironmentAction,
        GetEnvironmentAccountConnectionAction,
        GetEnvironmentTemplateAction,
        GetEnvironmentTemplateVersionAction,
        GetRepositoryAction,
        GetRepositorySyncStatusAction,
        GetServiceAction,
        GetServiceInstanceAction,
        GetServiceTemplateAction,
        GetServiceTemplateVersionAction,
        GetTemplateSyncConfigAction,
        GetTemplateSyncStatusAction,
        ListComponentOutputsAction,
        ListComponentProvisionedResourcesAction,
        ListComponentsAction,
        ListEnvironmentAccountConnectionsAction,
        ListEnvironmentOutputsAction,
        ListEnvironmentProvisionedResourcesAction,
        ListEnvironmentTemplateVersionsAction,
        ListEnvironmentTemplatesAction,
        ListEnvironmentsAction,
        ListRepositoriesAction,
        ListRepositorySyncDefinitionsAction,
        ListServiceInstanceOutputsAction,
        ListServiceInstanceProvisionedResourcesAction,
        ListServiceInstancesAction,
        ListServicePipelineOutputsAction,
        ListServicePipelineProvisionedResourcesAction,
        ListServiceTemplateVersionsAction,
        ListServiceTemplatesAction,
        ListServicesAction,
        ListTagsForResourceAction,
        NotifyResourceDeploymentStatusChangeAction,
        RejectEnvironmentAccountConnectionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAccountSettingsAction,
        UpdateComponentAction,
        UpdateEnvironmentAction,
        UpdateEnvironmentAccountConnectionAction,
        UpdateEnvironmentTemplateAction,
        UpdateEnvironmentTemplateVersionAction,
        UpdateServiceAction,
        UpdateServiceInstanceAction,
        UpdateServicePipelineAction,
        UpdateServiceTemplateAction,
        UpdateServiceTemplateVersionAction,
        UpdateTemplateSyncConfigAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ProtonRequest(const Action action);
    ProtonRequest(const ProtonRequest &other);
    ProtonRequest &operator=(const ProtonRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ProtonRequest &other) const;


protected:
    /// @cond internal
    explicit ProtonRequest(ProtonRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProtonRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
