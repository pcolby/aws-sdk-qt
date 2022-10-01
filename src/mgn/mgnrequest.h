// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MGNREQUEST_H
#define QTAWS_MGNREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmgnglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Mgn {

class MgnRequestPrivate;

class QTAWSMGN_EXPORT MgnRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Mgn.
    enum Action {
        ChangeServerLifeCycleStateAction,
        CreateLaunchConfigurationTemplateAction,
        CreateReplicationConfigurationTemplateAction,
        DeleteJobAction,
        DeleteLaunchConfigurationTemplateAction,
        DeleteReplicationConfigurationTemplateAction,
        DeleteSourceServerAction,
        DeleteVcenterClientAction,
        DescribeJobLogItemsAction,
        DescribeJobsAction,
        DescribeLaunchConfigurationTemplatesAction,
        DescribeReplicationConfigurationTemplatesAction,
        DescribeSourceServersAction,
        DescribeVcenterClientsAction,
        DisconnectFromServiceAction,
        FinalizeCutoverAction,
        GetLaunchConfigurationAction,
        GetReplicationConfigurationAction,
        InitializeServiceAction,
        ListTagsForResourceAction,
        MarkAsArchivedAction,
        RetryDataReplicationAction,
        StartCutoverAction,
        StartReplicationAction,
        StartTestAction,
        TagResourceAction,
        TerminateTargetInstancesAction,
        UntagResourceAction,
        UpdateLaunchConfigurationAction,
        UpdateLaunchConfigurationTemplateAction,
        UpdateReplicationConfigurationAction,
        UpdateReplicationConfigurationTemplateAction,
        UpdateSourceServerReplicationTypeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MgnRequest(const Action action);
    MgnRequest(const MgnRequest &other);
    MgnRequest &operator=(const MgnRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MgnRequest &other) const;


protected:
    /// @cond internal
    explicit MgnRequest(MgnRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MgnRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
