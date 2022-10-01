// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFRONTREQUEST_P_H
#define QTAWS_CLOUDFRONTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CloudFrontRequest;

class CloudFrontRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudFrontRequest::Action action; ///< CloudFront action to be performed.
    QString apiVersion;        ///< CloudFront API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudFront request (query string) parameters. @todo?

    CloudFrontRequestPrivate(const CloudFrontRequest::Action action, CloudFrontRequest * const q);
    CloudFrontRequestPrivate(const CloudFrontRequestPrivate &other, CloudFrontRequest * const q);

    static QString toString(const CloudFrontRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudFrontRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
