// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETOWNERSHIPCONTROLSREQUEST_P_H
#define QTAWS_PUTBUCKETOWNERSHIPCONTROLSREQUEST_P_H

#include "s3request_p.h"
#include "putbucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketOwnershipControlsRequest;

class PutBucketOwnershipControlsRequestPrivate : public S3RequestPrivate {

public:
    PutBucketOwnershipControlsRequestPrivate(const S3Request::Action action,
                                   PutBucketOwnershipControlsRequest * const q);
    PutBucketOwnershipControlsRequestPrivate(const PutBucketOwnershipControlsRequestPrivate &other,
                                   PutBucketOwnershipControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
