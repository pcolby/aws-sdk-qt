// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETREQUEST_H
#define QTAWS_CREATEBUCKETREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class CreateBucketRequestPrivate;

class QTAWSS3_EXPORT CreateBucketRequest : public S3Request {

public:
    CreateBucketRequest(const CreateBucketRequest &other);
    CreateBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBucketRequest)

};

} // namespace S3
} // namespace QtAws

#endif
