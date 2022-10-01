// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVENTBRIDGEREQUEST_H
#define QTAWS_EVENTBRIDGEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawseventbridgeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EventBridge {

class EventBridgeRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT EventBridgeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EventBridge.
    enum Action {
        ActivateEventSourceAction,
        CancelReplayAction,
        CreateApiDestinationAction,
        CreateArchiveAction,
        CreateConnectionAction,
        CreateEndpointAction,
        CreateEventBusAction,
        CreatePartnerEventSourceAction,
        DeactivateEventSourceAction,
        DeauthorizeConnectionAction,
        DeleteApiDestinationAction,
        DeleteArchiveAction,
        DeleteConnectionAction,
        DeleteEndpointAction,
        DeleteEventBusAction,
        DeletePartnerEventSourceAction,
        DeleteRuleAction,
        DescribeApiDestinationAction,
        DescribeArchiveAction,
        DescribeConnectionAction,
        DescribeEndpointAction,
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
        ListEndpointsAction,
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
        UpdateEndpointAction,
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
    explicit EventBridgeRequest(EventBridgeRequestPrivate * const d);
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
