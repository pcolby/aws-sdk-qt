// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETENCRYPTIONREQUEST_H
#define QTAWS_DELETEBUCKETENCRYPTIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class DeleteBucketEncryptionRequestPrivate;

class QTAWSS3_EXPORT DeleteBucketEncryptionRequest : public S3Request {

public:
    DeleteBucketEncryptionRequest(const DeleteBucketEncryptionRequest &other);
    DeleteBucketEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
