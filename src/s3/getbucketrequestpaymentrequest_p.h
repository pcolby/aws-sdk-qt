// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUESTPAYMENTREQUEST_P_H
#define QTAWS_GETBUCKETREQUESTPAYMENTREQUEST_P_H

#include "s3request_p.h"
#include "getbucketrequestpaymentrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketRequestPaymentRequest;

class GetBucketRequestPaymentRequestPrivate : public S3RequestPrivate {

public:
    GetBucketRequestPaymentRequestPrivate(const S3Request::Action action,
                                   GetBucketRequestPaymentRequest * const q);
    GetBucketRequestPaymentRequestPrivate(const GetBucketRequestPaymentRequestPrivate &other,
                                   GetBucketRequestPaymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketRequestPaymentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
