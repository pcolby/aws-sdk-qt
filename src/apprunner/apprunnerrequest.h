// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPRUNNERREQUEST_H
#define QTAWS_APPRUNNERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapprunnerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppRunner {

class AppRunnerRequestPrivate;

class QTAWSAPPRUNNER_EXPORT AppRunnerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppRunner.
    enum Action {
        AssociateCustomDomainAction,
        CreateAutoScalingConfigurationAction,
        CreateConnectionAction,
        CreateObservabilityConfigurationAction,
        CreateServiceAction,
        CreateVpcConnectorAction,
        DeleteAutoScalingConfigurationAction,
        DeleteConnectionAction,
        DeleteObservabilityConfigurationAction,
        DeleteServiceAction,
        DeleteVpcConnectorAction,
        DescribeAutoScalingConfigurationAction,
        DescribeCustomDomainsAction,
        DescribeObservabilityConfigurationAction,
        DescribeServiceAction,
        DescribeVpcConnectorAction,
        DisassociateCustomDomainAction,
        ListAutoScalingConfigurationsAction,
        ListConnectionsAction,
        ListObservabilityConfigurationsAction,
        ListOperationsAction,
        ListServicesAction,
        ListTagsForResourceAction,
        ListVpcConnectorsAction,
        PauseServiceAction,
        ResumeServiceAction,
        StartDeploymentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateServiceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppRunnerRequest(const Action action);
    AppRunnerRequest(const AppRunnerRequest &other);
    AppRunnerRequest &operator=(const AppRunnerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppRunnerRequest &other) const;


protected:
    /// @cond internal
    explicit AppRunnerRequest(AppRunnerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppRunnerRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
