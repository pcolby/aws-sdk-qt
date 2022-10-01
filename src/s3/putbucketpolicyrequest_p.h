// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETPOLICYREQUEST_P_H
#define QTAWS_PUTBUCKETPOLICYREQUEST_P_H

#include "s3request_p.h"
#include "putbucketpolicyrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketPolicyRequest;

class PutBucketPolicyRequestPrivate : public S3RequestPrivate {

public:
    PutBucketPolicyRequestPrivate(const S3Request::Action action,
                                   PutBucketPolicyRequest * const q);
    PutBucketPolicyRequestPrivate(const PutBucketPolicyRequestPrivate &other,
                                   PutBucketPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketPolicyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
