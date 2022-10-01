// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSREQUEST_P_H
#define QTAWS_S3OUTPOSTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3outpostsrequest.h"

namespace QtAws {
namespace S3Outposts {

class S3OutpostsRequest;

class S3OutpostsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3OutpostsRequest::Action action; ///< S3Outposts action to be performed.
    QString apiVersion;        ///< S3Outposts API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3Outposts request (query string) parameters. @todo?

    S3OutpostsRequestPrivate(const S3OutpostsRequest::Action action, S3OutpostsRequest * const q);
    S3OutpostsRequestPrivate(const S3OutpostsRequestPrivate &other, S3OutpostsRequest * const q);

    static QString toString(const S3OutpostsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(S3OutpostsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
