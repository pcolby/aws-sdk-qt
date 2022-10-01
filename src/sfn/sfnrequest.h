// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SFNREQUEST_H
#define QTAWS_SFNREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssfnglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Sfn {

class SfnRequestPrivate;

class QTAWSSFN_EXPORT SfnRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Sfn.
    enum Action {
        CreateActivityAction,
        CreateStateMachineAction,
        DeleteActivityAction,
        DeleteStateMachineAction,
        DescribeActivityAction,
        DescribeExecutionAction,
        DescribeStateMachineAction,
        DescribeStateMachineForExecutionAction,
        GetActivityTaskAction,
        GetExecutionHistoryAction,
        ListActivitiesAction,
        ListExecutionsAction,
        ListStateMachinesAction,
        ListTagsForResourceAction,
        SendTaskFailureAction,
        SendTaskHeartbeatAction,
        SendTaskSuccessAction,
        StartExecutionAction,
        StartSyncExecutionAction,
        StopExecutionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateStateMachineAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SfnRequest(const Action action);
    SfnRequest(const SfnRequest &other);
    SfnRequest &operator=(const SfnRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SfnRequest &other) const;


protected:
    /// @cond internal
    explicit SfnRequest(SfnRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SfnRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
