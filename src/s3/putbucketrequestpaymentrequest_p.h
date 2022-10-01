// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREQUESTPAYMENTREQUEST_P_H
#define QTAWS_PUTBUCKETREQUESTPAYMENTREQUEST_P_H

#include "s3request_p.h"
#include "putbucketrequestpaymentrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketRequestPaymentRequest;

class PutBucketRequestPaymentRequestPrivate : public S3RequestPrivate {

public:
    PutBucketRequestPaymentRequestPrivate(const S3Request::Action action,
                                   PutBucketRequestPaymentRequest * const q);
    PutBucketRequestPaymentRequestPrivate(const PutBucketRequestPaymentRequestPrivate &other,
                                   PutBucketRequestPaymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketRequestPaymentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
