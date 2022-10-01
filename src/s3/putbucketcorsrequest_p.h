// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETCORSREQUEST_P_H
#define QTAWS_PUTBUCKETCORSREQUEST_P_H

#include "s3request_p.h"
#include "putbucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketCorsRequest;

class PutBucketCorsRequestPrivate : public S3RequestPrivate {

public:
    PutBucketCorsRequestPrivate(const S3Request::Action action,
                                   PutBucketCorsRequest * const q);
    PutBucketCorsRequestPrivate(const PutBucketCorsRequestPrivate &other,
                                   PutBucketCorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
