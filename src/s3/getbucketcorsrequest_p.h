// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETCORSREQUEST_P_H
#define QTAWS_GETBUCKETCORSREQUEST_P_H

#include "s3request_p.h"
#include "getbucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketCorsRequest;

class GetBucketCorsRequestPrivate : public S3RequestPrivate {

public:
    GetBucketCorsRequestPrivate(const S3Request::Action action,
                                   GetBucketCorsRequest * const q);
    GetBucketCorsRequestPrivate(const GetBucketCorsRequestPrivate &other,
                                   GetBucketCorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
