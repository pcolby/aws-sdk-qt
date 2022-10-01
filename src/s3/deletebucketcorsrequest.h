// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETCORSREQUEST_H
#define QTAWS_DELETEBUCKETCORSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketCorsRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketCorsRequest : public S3Request {

public:
    DeleteBucketCorsRequest(const DeleteBucketCorsRequest &other);
    DeleteBucketCorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
