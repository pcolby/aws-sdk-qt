// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSREQUEST_H
#define QTAWS_SMSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssmsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Sms {

class SmsRequestPrivate;

class QTAWSSMS_EXPORT SmsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Sms.
    enum Action {
        CreateAppAction,
        CreateReplicationJobAction,
        DeleteAppAction,
        DeleteAppLaunchConfigurationAction,
        DeleteAppReplicationConfigurationAction,
        DeleteAppValidationConfigurationAction,
        DeleteReplicationJobAction,
        DeleteServerCatalogAction,
        DisassociateConnectorAction,
        GenerateChangeSetAction,
        GenerateTemplateAction,
        GetAppAction,
        GetAppLaunchConfigurationAction,
        GetAppReplicationConfigurationAction,
        GetAppValidationConfigurationAction,
        GetAppValidationOutputAction,
        GetConnectorsAction,
        GetReplicationJobsAction,
        GetReplicationRunsAction,
        GetServersAction,
        ImportAppCatalogAction,
        ImportServerCatalogAction,
        LaunchAppAction,
        ListAppsAction,
        NotifyAppValidationOutputAction,
        PutAppLaunchConfigurationAction,
        PutAppReplicationConfigurationAction,
        PutAppValidationConfigurationAction,
        StartAppReplicationAction,
        StartOnDemandAppReplicationAction,
        StartOnDemandReplicationRunAction,
        StopAppReplicationAction,
        TerminateAppAction,
        UpdateAppAction,
        UpdateReplicationJobAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SmsRequest(const Action action);
    SmsRequest(const SmsRequest &other);
    SmsRequest &operator=(const SmsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SmsRequest &other) const;


protected:
    /// @cond internal
    explicit SmsRequest(SmsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SmsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
