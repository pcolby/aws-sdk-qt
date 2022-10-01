// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETTAGGINGREQUEST_P_H
#define QTAWS_GETBUCKETTAGGINGREQUEST_P_H

#include "s3request_p.h"
#include "getbuckettaggingrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketTaggingRequest;

class GetBucketTaggingRequestPrivate : public S3RequestPrivate {

public:
    GetBucketTaggingRequestPrivate(const S3Request::Action action,
                                   GetBucketTaggingRequest * const q);
    GetBucketTaggingRequestPrivate(const GetBucketTaggingRequestPrivate &other,
                                   GetBucketTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
