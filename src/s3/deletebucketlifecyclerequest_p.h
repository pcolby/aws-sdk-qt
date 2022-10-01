// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLEREQUEST_P_H
#define QTAWS_DELETEBUCKETLIFECYCLEREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketlifecyclerequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketLifecycleRequest;

class DeleteBucketLifecycleRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketLifecycleRequestPrivate(const S3Request::Action action,
                                   DeleteBucketLifecycleRequest * const q);
    DeleteBucketLifecycleRequestPrivate(const DeleteBucketLifecycleRequestPrivate &other,
                                   DeleteBucketLifecycleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketLifecycleRequest)

};

} // namespace S3
} // namespace QtAws

#endif
