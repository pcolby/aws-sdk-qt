// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETWEBSITEREQUEST_P_H
#define QTAWS_PUTBUCKETWEBSITEREQUEST_P_H

#include "s3request_p.h"
#include "putbucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class PutBucketWebsiteRequest;

class PutBucketWebsiteRequestPrivate : public S3RequestPrivate {

public:
    PutBucketWebsiteRequestPrivate(const S3Request::Action action,
                                   PutBucketWebsiteRequest * const q);
    PutBucketWebsiteRequestPrivate(const PutBucketWebsiteRequestPrivate &other,
                                   PutBucketWebsiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
