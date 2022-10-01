// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYREQUEST_P_H
#define QTAWS_DELETEBUCKETPOLICYREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketpolicyrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketPolicyRequest;

class DeleteBucketPolicyRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketPolicyRequestPrivate(const S3Request::Action action,
                                   DeleteBucketPolicyRequest * const q);
    DeleteBucketPolicyRequestPrivate(const DeleteBucketPolicyRequestPrivate &other,
                                   DeleteBucketPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketPolicyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
