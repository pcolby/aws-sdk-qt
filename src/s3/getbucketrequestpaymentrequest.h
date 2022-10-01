// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUESTPAYMENTREQUEST_H
#define QTAWS_GETBUCKETREQUESTPAYMENTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketRequestPaymentRequestPrivate;

class QTAWSS3_EXPORT GetBucketRequestPaymentRequest : public S3Request {

public:
    GetBucketRequestPaymentRequest(const GetBucketRequestPaymentRequest &other);
    GetBucketRequestPaymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketRequestPaymentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
