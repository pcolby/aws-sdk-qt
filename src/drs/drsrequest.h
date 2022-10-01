// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DRSREQUEST_H
#define QTAWS_DRSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdrsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Drs {

class DrsRequestPrivate;

class QTAWSDRS_EXPORT DrsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Drs.
    enum Action {
        CreateExtendedSourceServerAction,
        CreateReplicationConfigurationTemplateAction,
        DeleteJobAction,
        DeleteRecoveryInstanceAction,
        DeleteReplicationConfigurationTemplateAction,
        DeleteSourceServerAction,
        DescribeJobLogItemsAction,
        DescribeJobsAction,
        DescribeRecoveryInstancesAction,
        DescribeRecoverySnapshotsAction,
        DescribeReplicationConfigurationTemplatesAction,
        DescribeSourceServersAction,
        DisconnectRecoveryInstanceAction,
        DisconnectSourceServerAction,
        GetFailbackReplicationConfigurationAction,
        GetLaunchConfigurationAction,
        GetReplicationConfigurationAction,
        InitializeServiceAction,
        ListExtensibleSourceServersAction,
        ListStagingAccountsAction,
        ListTagsForResourceAction,
        RetryDataReplicationAction,
        StartFailbackLaunchAction,
        StartRecoveryAction,
        StopFailbackAction,
        TagResourceAction,
        TerminateRecoveryInstancesAction,
        UntagResourceAction,
        UpdateFailbackReplicationConfigurationAction,
        UpdateLaunchConfigurationAction,
        UpdateReplicationConfigurationAction,
        UpdateReplicationConfigurationTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DrsRequest(const Action action);
    DrsRequest(const DrsRequest &other);
    DrsRequest &operator=(const DrsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DrsRequest &other) const;


protected:
    /// @cond internal
    explicit DrsRequest(DrsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DrsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
