// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETWEBSITEREQUEST_P_H
#define QTAWS_DELETEBUCKETWEBSITEREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketWebsiteRequest;

class DeleteBucketWebsiteRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketWebsiteRequestPrivate(const S3Request::Action action,
                                   DeleteBucketWebsiteRequest * const q);
    DeleteBucketWebsiteRequestPrivate(const DeleteBucketWebsiteRequestPrivate &other,
                                   DeleteBucketWebsiteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketWebsiteRequest)

};

} // namespace S3
} // namespace QtAws

#endif
