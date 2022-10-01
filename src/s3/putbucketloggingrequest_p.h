// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLOGGINGREQUEST_P_H
#define QTAWS_PUTBUCKETLOGGINGREQUEST_P_H

#include "s3request_p.h"
#include "putbucketloggingrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketLoggingRequest;

class PutBucketLoggingRequestPrivate : public S3RequestPrivate {

public:
    PutBucketLoggingRequestPrivate(const S3Request::Action action,
                                   PutBucketLoggingRequest * const q);
    PutBucketLoggingRequestPrivate(const PutBucketLoggingRequestPrivate &other,
                                   PutBucketLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketLoggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
