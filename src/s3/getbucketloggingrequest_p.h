// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOGGINGREQUEST_P_H
#define QTAWS_GETBUCKETLOGGINGREQUEST_P_H

#include "s3request_p.h"
#include "getbucketloggingrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketLoggingRequest;

class GetBucketLoggingRequestPrivate : public S3RequestPrivate {

public:
    GetBucketLoggingRequestPrivate(const S3Request::Action action,
                                   GetBucketLoggingRequest * const q);
    GetBucketLoggingRequestPrivate(const GetBucketLoggingRequestPrivate &other,
                                   GetBucketLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketLoggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
