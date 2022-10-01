// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETOWNERSHIPCONTROLSREQUEST_P_H
#define QTAWS_GETBUCKETOWNERSHIPCONTROLSREQUEST_P_H

#include "s3request_p.h"
#include "getbucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketOwnershipControlsRequest;

class GetBucketOwnershipControlsRequestPrivate : public S3RequestPrivate {

public:
    GetBucketOwnershipControlsRequestPrivate(const S3Request::Action action,
                                   GetBucketOwnershipControlsRequest * const q);
    GetBucketOwnershipControlsRequestPrivate(const GetBucketOwnershipControlsRequestPrivate &other,
                                   GetBucketOwnershipControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
