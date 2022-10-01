// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUESTPAYMENTRESPONSE_H
#define QTAWS_GETBUCKETREQUESTPAYMENTRESPONSE_H

#include "s3response.h"
#include "getbucketrequestpaymentrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketRequestPaymentResponsePrivate;

class QTAWSS3_EXPORT GetBucketRequestPaymentResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketRequestPaymentResponse(const GetBucketRequestPaymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketRequestPaymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketRequestPaymentResponse)
    Q_DISABLE_COPY(GetBucketRequestPaymentResponse)

};

} // namespace S3
} // namespace QtAws

#endif
