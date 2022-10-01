// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETCORSREQUEST_H
#define QTAWS_GETBUCKETCORSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketCorsRequestPrivate;

class QTAWSS3_EXPORT GetBucketCorsRequest : public S3Request {

public:
    GetBucketCorsRequest(const GetBucketCorsRequest &other);
    GetBucketCorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
