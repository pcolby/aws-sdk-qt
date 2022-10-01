// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETENCRYPTIONREQUEST_P_H
#define QTAWS_PUTBUCKETENCRYPTIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketEncryptionRequest;

class PutBucketEncryptionRequestPrivate : public S3RequestPrivate {

public:
    PutBucketEncryptionRequestPrivate(const S3Request::Action action,
                                   PutBucketEncryptionRequest * const q);
    PutBucketEncryptionRequestPrivate(const PutBucketEncryptionRequestPrivate &other,
                                   PutBucketEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
