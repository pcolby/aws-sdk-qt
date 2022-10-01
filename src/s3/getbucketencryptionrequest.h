// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETENCRYPTIONREQUEST_H
#define QTAWS_GETBUCKETENCRYPTIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketEncryptionRequestPrivate;

class QTAWSS3_EXPORT GetBucketEncryptionRequest : public S3Request {

public:
    GetBucketEncryptionRequest(const GetBucketEncryptionRequest &other);
    GetBucketEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
