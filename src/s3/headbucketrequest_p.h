// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADBUCKETREQUEST_P_H
#define QTAWS_HEADBUCKETREQUEST_P_H

#include "s3request_p.h"
#include "headbucketrequest.h"

namespace QtAws {
namespace S3 {

class HeadBucketRequest;

class HeadBucketRequestPrivate : public S3RequestPrivate {

public:
    HeadBucketRequestPrivate(const S3Request::Action action,
                                   HeadBucketRequest * const q);
    HeadBucketRequestPrivate(const HeadBucketRequestPrivate &other,
                                   HeadBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(HeadBucketRequest)

};

} // namespace S3
} // namespace QtAws

#endif
