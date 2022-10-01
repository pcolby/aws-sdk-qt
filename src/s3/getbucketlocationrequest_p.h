// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOCATIONREQUEST_P_H
#define QTAWS_GETBUCKETLOCATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketlocationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketLocationRequest;

class GetBucketLocationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketLocationRequestPrivate(const S3Request::Action action,
                                   GetBucketLocationRequest * const q);
    GetBucketLocationRequestPrivate(const GetBucketLocationRequestPrivate &other,
                                   GetBucketLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketLocationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
