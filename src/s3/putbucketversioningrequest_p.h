// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETVERSIONINGREQUEST_P_H
#define QTAWS_PUTBUCKETVERSIONINGREQUEST_P_H

#include "s3request_p.h"
#include "putbucketversioningrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketVersioningRequest;

class PutBucketVersioningRequestPrivate : public S3RequestPrivate {

public:
    PutBucketVersioningRequestPrivate(const S3Request::Action action,
                                   PutBucketVersioningRequest * const q);
    PutBucketVersioningRequestPrivate(const PutBucketVersioningRequestPrivate &other,
                                   PutBucketVersioningRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketVersioningRequest)

};

} // namespace S3
} // namespace QtAws

#endif
