// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETENCRYPTIONREQUEST_H
#define QTAWS_PUTBUCKETENCRYPTIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketEncryptionRequestPrivate;

class QTAWSS3_EXPORT PutBucketEncryptionRequest : public S3Request {

public:
    PutBucketEncryptionRequest(const PutBucketEncryptionRequest &other);
    PutBucketEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
