// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUESTPAYMENTRESPONSE_P_H
#define QTAWS_GETBUCKETREQUESTPAYMENTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketRequestPaymentResponse;

class GetBucketRequestPaymentResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketRequestPaymentResponsePrivate(GetBucketRequestPaymentResponse * const q);

    void parseGetBucketRequestPaymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketRequestPaymentResponse)
    Q_DISABLE_COPY(GetBucketRequestPaymentResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
