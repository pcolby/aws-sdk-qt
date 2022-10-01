// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYREQUEST_P_H
#define QTAWS_DELETEBUCKETPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletebucketpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketPolicyRequest;

class DeleteBucketPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteBucketPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteBucketPolicyRequest * const q);
    DeleteBucketPolicyRequestPrivate(const DeleteBucketPolicyRequestPrivate &other,
                                   DeleteBucketPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
