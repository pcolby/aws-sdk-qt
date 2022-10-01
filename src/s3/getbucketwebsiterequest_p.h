// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETWEBSITEREQUEST_P_H
#define QTAWS_GETBUCKETWEBSITEREQUEST_P_H

#include "s3request_p.h"
#include "getbucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class GetBucketWebsiteRequest;

class GetBucketWebsiteRequestPrivate : public S3RequestPrivate {

public:
    GetBucketWebsiteRequestPrivate(const S3Request::Action action,
                                   GetBucketWebsiteRequest * const q);
    GetBucketWebsiteRequestPrivate(const GetBucketWebsiteRequestPrivate &other,
                                   GetBucketWebsiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
