// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWFREQUEST_H
#define QTAWS_SWFREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsswfglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Swf {

class SwfRequestPrivate;

class QTAWSSWF_EXPORT SwfRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Swf.
    enum Action {
        CountClosedWorkflowExecutionsAction,
        CountOpenWorkflowExecutionsAction,
        CountPendingActivityTasksAction,
        CountPendingDecisionTasksAction,
        DeprecateActivityTypeAction,
        DeprecateDomainAction,
        DeprecateWorkflowTypeAction,
        DescribeActivityTypeAction,
        DescribeDomainAction,
        DescribeWorkflowExecutionAction,
        DescribeWorkflowTypeAction,
        GetWorkflowExecutionHistoryAction,
        ListActivityTypesAction,
        ListClosedWorkflowExecutionsAction,
        ListDomainsAction,
        ListOpenWorkflowExecutionsAction,
        ListTagsForResourceAction,
        ListWorkflowTypesAction,
        PollForActivityTaskAction,
        PollForDecisionTaskAction,
        RecordActivityTaskHeartbeatAction,
        RegisterActivityTypeAction,
        RegisterDomainAction,
        RegisterWorkflowTypeAction,
        RequestCancelWorkflowExecutionAction,
        RespondActivityTaskCanceledAction,
        RespondActivityTaskCompletedAction,
        RespondActivityTaskFailedAction,
        RespondDecisionTaskCompletedAction,
        SignalWorkflowExecutionAction,
        StartWorkflowExecutionAction,
        TagResourceAction,
        TerminateWorkflowExecutionAction,
        UndeprecateActivityTypeAction,
        UndeprecateDomainAction,
        UndeprecateWorkflowTypeAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SwfRequest(const Action action);
    SwfRequest(const SwfRequest &other);
    SwfRequest &operator=(const SwfRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SwfRequest &other) const;


protected:
    /// @cond internal
    explicit SwfRequest(SwfRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwfRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
