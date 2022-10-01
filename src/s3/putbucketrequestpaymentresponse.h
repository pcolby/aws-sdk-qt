// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREQUESTPAYMENTRESPONSE_H
#define QTAWS_PUTBUCKETREQUESTPAYMENTRESPONSE_H

#include "s3response.h"
#include "putbucketrequestpaymentrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketRequestPaymentResponsePrivate;

class QTAWSS3_EXPORT PutBucketRequestPaymentResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketRequestPaymentResponse(const PutBucketRequestPaymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketRequestPaymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketRequestPaymentResponse)
    Q_DISABLE_COPY(PutBucketRequestPaymentResponse)

};

} // namespace S3
} // namespace QtAws

#endif
