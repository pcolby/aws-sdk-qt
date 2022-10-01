// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHREQUEST_P_H
#define QTAWS_CLOUDWATCHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class CloudWatchRequest;

class CloudWatchRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudWatchRequest::Action action; ///< CloudWatch action to be performed.
    QString apiVersion;        ///< CloudWatch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudWatch request (query string) parameters. @todo?

    CloudWatchRequestPrivate(const CloudWatchRequest::Action action, CloudWatchRequest * const q);
    CloudWatchRequestPrivate(const CloudWatchRequestPrivate &other, CloudWatchRequest * const q);

    static QString toString(const CloudWatchRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudWatchRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
