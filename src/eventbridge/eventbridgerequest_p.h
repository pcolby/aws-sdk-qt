// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVENTBRIDGEREQUEST_P_H
#define QTAWS_EVENTBRIDGEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class EventBridgeRequest;

class EventBridgeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EventBridgeRequest::Action action; ///< EventBridge action to be performed.
    QString apiVersion;        ///< EventBridge API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EventBridge request (query string) parameters. @todo?

    EventBridgeRequestPrivate(const EventBridgeRequest::Action action, EventBridgeRequest * const q);
    EventBridgeRequestPrivate(const EventBridgeRequestPrivate &other, EventBridgeRequest * const q);

    static QString toString(const EventBridgeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EventBridgeRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
