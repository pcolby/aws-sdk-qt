// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREQUEST_P_H
#define QTAWS_GETBUCKETREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getbucketrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketRequest;

class GetBucketRequestPrivate : public S3ControlRequestPrivate {

public:
    GetBucketRequestPrivate(const S3ControlRequest::Action action,
                                   GetBucketRequest * const q);
    GetBucketRequestPrivate(const GetBucketRequestPrivate &other,
                                   GetBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
