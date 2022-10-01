// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETOWNERSHIPCONTROLSREQUEST_P_H
#define QTAWS_DELETEBUCKETOWNERSHIPCONTROLSREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketOwnershipControlsRequest;

class DeleteBucketOwnershipControlsRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketOwnershipControlsRequestPrivate(const S3Request::Action action,
                                   DeleteBucketOwnershipControlsRequest * const q);
    DeleteBucketOwnershipControlsRequestPrivate(const DeleteBucketOwnershipControlsRequestPrivate &other,
                                   DeleteBucketOwnershipControlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketOwnershipControlsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
