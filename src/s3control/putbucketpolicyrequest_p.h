// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETPOLICYREQUEST_P_H
#define QTAWS_PUTBUCKETPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putbucketpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutBucketPolicyRequest;

class PutBucketPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    PutBucketPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   PutBucketPolicyRequest * const q);
    PutBucketPolicyRequestPrivate(const PutBucketPolicyRequestPrivate &other,
                                   PutBucketPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
