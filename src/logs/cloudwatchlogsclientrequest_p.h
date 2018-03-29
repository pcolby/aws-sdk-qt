/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDWATCHLOGSCLIENTREQUEST_P_H
#define QTAWS_CLOUDWATCHLOGSCLIENTREQUEST_P_H

#include "cloudwatchlogs_p.h"
#include "cloudwatchlogsclientrequest.h"

namespace AWS {

namespace CloudWatchLogs {

class CloudWatchLogsClientRequest;

class QTAWS_EXPORT CloudWatchLogsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    CloudWatchLogsClientRequest::Action action; ///< CloudWatchLogs action to be performed.
    QString apiVersion;        ///< CloudWatchLogs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudWatchLogs request (query string) parameters. @todo?

    CloudWatchLogsClientRequestPrivate(const CloudWatchLogsClientRequest::Action action, CloudWatchLogsClientRequest * const q);
    CloudWatchLogsClientRequestPrivate(const CloudWatchLogsClientRequestPrivate &other, CloudWatchLogsClientRequest * const q);

    static QString toString(const CloudWatchLogsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudWatchLogsClientRequest)

};

} // namespace CloudWatchLogs
} // namespace AWS

#endif
