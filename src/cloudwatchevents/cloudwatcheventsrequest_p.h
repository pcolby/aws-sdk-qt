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

#ifndef QTAWS_CLOUDWATCHEVENTSREQUEST_P_H
#define QTAWS_CLOUDWATCHEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsRequest;

class QTAWS_EXPORT CloudWatchEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
