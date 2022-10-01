// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDTRAILREQUEST_P_H
#define QTAWS_CLOUDTRAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CloudTrailRequest;

class CloudTrailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudTrailRequest::Action action; ///< CloudTrail action to be performed.
    QString apiVersion;        ///< CloudTrail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudTrail request (query string) parameters. @todo?

    CloudTrailRequestPrivate(const CloudTrailRequest::Action action, CloudTrailRequest * const q);
    CloudTrailRequestPrivate(const CloudTrailRequestPrivate &other, CloudTrailRequest * const q);

    static QString toString(const CloudTrailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
