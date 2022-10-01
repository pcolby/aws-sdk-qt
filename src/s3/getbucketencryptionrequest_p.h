// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETENCRYPTIONREQUEST_P_H
#define QTAWS_GETBUCKETENCRYPTIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketencryptionrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketEncryptionRequest;

class GetBucketEncryptionRequestPrivate : public S3RequestPrivate {

public:
    GetBucketEncryptionRequestPrivate(const S3Request::Action action,
                                   GetBucketEncryptionRequest * const q);
    GetBucketEncryptionRequestPrivate(const GetBucketEncryptionRequestPrivate &other,
                                   GetBucketEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketEncryptionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
