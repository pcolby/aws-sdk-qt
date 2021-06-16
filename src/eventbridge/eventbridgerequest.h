/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_EVENTBRIDGEREQUEST_H
#define QTAWS_EVENTBRIDGEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EventBridge {

class EventBridgeRequestPrivate;

class QTAWS_EXPORT EventBridgeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EventBridge.
    enum Action {
        ActivateEventSourceAction,
        CancelReplayAction,
        CreateApiDestinationAction,
        CreateArchiveAction,
        CreateConnectionAction,
        CreateEventBusAction,
        CreatePartnerEventSourceAction,
        DeactivateEventSourceAction,
        DeauthorizeConnectionAction,
        DeleteApiDestinationAction,
        DeleteArchiveAction,
        DeleteConnectionAction,
        DeleteEventBusAction,
        DeletePartnerEventSourceAction,
        DeleteRuleAction,
        DescribeApiDestinationAction,
        DescribeArchiveAction,
        DescribeConnectionAction,
        DescribeEventBusAction,
        DescribeEventSourceAction,
        DescribePartnerEventSourceAction,
        DescribeReplayAction,
        DescribeRuleAction,
        DisableRuleAction,
        EnableRuleAction,
        ListApiDestinationsAction,
        ListArchivesAction,
        ListConnectionsAction,
        ListEventBusesAction,
        ListEventSourcesAction,
        ListPartnerEventSourceAccountsAction,
        ListPartnerEventSourcesAction,
        ListReplaysAction,
        ListRuleNamesByTargetAction,
        ListRulesAction,
        ListTagsForResourceAction,
        ListTargetsByRuleAction,
        PutEventsAction,
        PutPartnerEventsAction,
        PutPermissionAction,
        PutRuleAction,
        PutTargetsAction,
        RemovePermissionAction,
        RemoveTargetsAction,
        StartReplayAction,
        TagResourceAction,
        TestEventPatternAction,
        UntagResourceAction,
        UpdateApiDestinationAction,
        UpdateArchiveAction,
        UpdateConnectionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EventBridgeRequest(const Action action);
    EventBridgeRequest(const EventBridgeRequest &other);
    EventBridgeRequest &operator=(const EventBridgeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EventBridgeRequest &other) const;


protected:
    /// @cond internal
    EventBridgeRequest(EventBridgeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EventBridgeRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
