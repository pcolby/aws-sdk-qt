// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACLREQUEST_P_H
#define QTAWS_PUTBUCKETACLREQUEST_P_H

#include "s3request_p.h"
#include "putbucketaclrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAclRequest;

class PutBucketAclRequestPrivate : public S3RequestPrivate {

public:
    PutBucketAclRequestPrivate(const S3Request::Action action,
                                   PutBucketAclRequest * const q);
    PutBucketAclRequestPrivate(const PutBucketAclRequestPrivate &other,
                                   PutBucketAclRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketAclRequest)

};

} // namespace S3
} // namespace QtAws

#endif
