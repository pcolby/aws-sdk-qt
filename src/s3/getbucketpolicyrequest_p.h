// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYREQUEST_P_H
#define QTAWS_GETBUCKETPOLICYREQUEST_P_H

#include "s3request_p.h"
#include "getbucketpolicyrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketPolicyRequest;

class GetBucketPolicyRequestPrivate : public S3RequestPrivate {

public:
    GetBucketPolicyRequestPrivate(const S3Request::Action action,
                                   GetBucketPolicyRequest * const q);
    GetBucketPolicyRequestPrivate(const GetBucketPolicyRequestPrivate &other,
                                   GetBucketPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketPolicyRequest)

};

} // namespace S3
} // namespace QtAws

#endif
