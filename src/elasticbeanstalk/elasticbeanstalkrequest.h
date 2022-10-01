// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICBEANSTALKREQUEST_H
#define QTAWS_ELASTICBEANSTALKREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticbeanstalkglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT ElasticBeanstalkRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElasticBeanstalk.
    enum Action {
        AbortEnvironmentUpdateAction,
        ApplyEnvironmentManagedActionAction,
        AssociateEnvironmentOperationsRoleAction,
        CheckDNSAvailabilityAction,
        ComposeEnvironmentsAction,
        CreateApplicationAction,
        CreateApplicationVersionAction,
        CreateConfigurationTemplateAction,
        CreateEnvironmentAction,
        CreatePlatformVersionAction,
        CreateStorageLocationAction,
        DeleteApplicationAction,
        DeleteApplicationVersionAction,
        DeleteConfigurationTemplateAction,
        DeleteEnvironmentConfigurationAction,
        DeletePlatformVersionAction,
        DescribeAccountAttributesAction,
        DescribeApplicationVersionsAction,
        DescribeApplicationsAction,
        DescribeConfigurationOptionsAction,
        DescribeConfigurationSettingsAction,
        DescribeEnvironmentHealthAction,
        DescribeEnvironmentManagedActionHistoryAction,
        DescribeEnvironmentManagedActionsAction,
        DescribeEnvironmentResourcesAction,
        DescribeEnvironmentsAction,
        DescribeEventsAction,
        DescribeInstancesHealthAction,
        DescribePlatformVersionAction,
        DisassociateEnvironmentOperationsRoleAction,
        ListAvailableSolutionStacksAction,
        ListPlatformBranchesAction,
        ListPlatformVersionsAction,
        ListTagsForResourceAction,
        RebuildEnvironmentAction,
        RequestEnvironmentInfoAction,
        RestartAppServerAction,
        RetrieveEnvironmentInfoAction,
        SwapEnvironmentCNAMEsAction,
        TerminateEnvironmentAction,
        UpdateApplicationAction,
        UpdateApplicationResourceLifecycleAction,
        UpdateApplicationVersionAction,
        UpdateConfigurationTemplateAction,
        UpdateEnvironmentAction,
        UpdateTagsForResourceAction,
        ValidateConfigurationSettingsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticBeanstalkRequest(const Action action);
    ElasticBeanstalkRequest(const ElasticBeanstalkRequest &other);
    ElasticBeanstalkRequest &operator=(const ElasticBeanstalkRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticBeanstalkRequest &other) const;


protected:
    /// @cond internal
    explicit ElasticBeanstalkRequest(ElasticBeanstalkRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticBeanstalkRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
