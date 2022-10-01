// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHLOGSREQUEST_P_H
#define QTAWS_CLOUDWATCHLOGSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsRequest;

class CloudWatchLogsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
