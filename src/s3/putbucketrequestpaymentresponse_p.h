// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREQUESTPAYMENTRESPONSE_P_H
#define QTAWS_PUTBUCKETREQUESTPAYMENTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketRequestPaymentResponse;

class PutBucketRequestPaymentResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketRequestPaymentResponsePrivate(PutBucketRequestPaymentResponse * const q);

    void parsePutBucketRequestPaymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketRequestPaymentResponse)
    Q_DISABLE_COPY(PutBucketRequestPaymentResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
