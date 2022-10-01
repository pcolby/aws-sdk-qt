// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACLREQUEST_P_H
#define QTAWS_GETBUCKETACLREQUEST_P_H

#include "s3request_p.h"
#include "getbucketaclrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAclRequest;

class GetBucketAclRequestPrivate : public S3RequestPrivate {

public:
    GetBucketAclRequestPrivate(const S3Request::Action action,
                                   GetBucketAclRequest * const q);
    GetBucketAclRequestPrivate(const GetBucketAclRequestPrivate &other,
                                   GetBucketAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
