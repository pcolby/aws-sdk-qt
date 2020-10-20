/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SWFREQUEST_H
#define QTAWS_SWFREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SWF {

class SwfRequestPrivate;

class QTAWS_EXPORT SwfRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SWF.
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
    SwfRequest(SwfRequestPrivate * const d);
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

} // namespace SWF
} // namespace QtAws

#endif
