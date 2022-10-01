// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHEVENTSREQUEST_P_H
#define QTAWS_CLOUDWATCHEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsRequest;

class CloudWatchEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudWatchEventsRequest::Action action; ///< CloudWatchEvents action to be performed.
    QString apiVersion;        ///< CloudWatchEvents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudWatchEvents request (query string) parameters. @todo?

    CloudWatchEventsRequestPrivate(const CloudWatchEventsRequest::Action action, CloudWatchEventsRequest * const q);
    CloudWatchEventsRequestPrivate(const CloudWatchEventsRequestPrivate &other, CloudWatchEventsRequest * const q);

    static QString toString(const CloudWatchEventsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudWatchEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
