/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CLOUDWATCHLOGSREQUEST_P_H
#define QTAWS_CLOUDWATCHLOGSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsRequest;

class QTAWS_EXPORT CloudWatchLogsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudWatchLogsRequest::Action action; ///< CloudWatchLogs action to be performed.
    QString apiVersion;        ///< CloudWatchLogs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudWatchLogs request (query string) parameters. @todo?

    CloudWatchLogsRequestPrivate(const CloudWatchLogsRequest::Action action, CloudWatchLogsRequest * const q);
    CloudWatchLogsRequestPrivate(const CloudWatchLogsRequestPrivate &other, CloudWatchLogsRequest * const q);

    static QString toString(const CloudWatchLogsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudWatchLogsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
