// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETCORSREQUEST_P_H
#define QTAWS_DELETEBUCKETCORSREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketCorsRequest;

class DeleteBucketCorsRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketCorsRequestPrivate(const S3Request::Action action,
                                   DeleteBucketCorsRequest * const q);
    DeleteBucketCorsRequestPrivate(const DeleteBucketCorsRequestPrivate &other,
                                   DeleteBucketCorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketCorsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
