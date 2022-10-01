// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYSTATUSREQUEST_P_H
#define QTAWS_GETBUCKETPOLICYSTATUSREQUEST_P_H

#include "s3request_p.h"
#include "getbucketpolicystatusrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketPolicyStatusRequest;

class GetBucketPolicyStatusRequestPrivate : public S3RequestPrivate {

public:
    GetBucketPolicyStatusRequestPrivate(const S3Request::Action action,
                                   GetBucketPolicyStatusRequest * const q);
    GetBucketPolicyStatusRequestPrivate(const GetBucketPolicyStatusRequestPrivate &other,
                                   GetBucketPolicyStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketPolicyStatusRequest)

};

} // namespace S3
} // namespace QtAws

#endif
