// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETENCRYPTIONREQUEST_P_H
#define QTAWS_DELETEBUCKETENCRYPTIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketEncryptionRequest;

class DeleteBucketEncryptionRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketEncryptionRequestPrivate(const S3Request::Action action,
                                   DeleteBucketEncryptionRequest * const q);
    DeleteBucketEncryptionRequestPrivate(const DeleteBucketEncryptionRequestPrivate &other,
                                   DeleteBucketEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
