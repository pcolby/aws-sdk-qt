// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETVERSIONINGREQUEST_P_H
#define QTAWS_GETBUCKETVERSIONINGREQUEST_P_H

#include "s3request_p.h"
#include "getbucketversioningrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketVersioningRequest;

class GetBucketVersioningRequestPrivate : public S3RequestPrivate {

public:
    GetBucketVersioningRequestPrivate(const S3Request::Action action,
                                   GetBucketVersioningRequest * const q);
    GetBucketVersioningRequestPrivate(const GetBucketVersioningRequestPrivate &other,
                                   GetBucketVersioningRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketVersioningRequest)

};

} // namespace S3
} // namespace QtAws

#endif
