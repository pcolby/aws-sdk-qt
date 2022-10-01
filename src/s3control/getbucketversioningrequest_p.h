// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETVERSIONINGREQUEST_P_H
#define QTAWS_GETBUCKETVERSIONINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getbucketversioningrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketVersioningRequest;

class GetBucketVersioningRequestPrivate : public S3ControlRequestPrivate {

public:
    GetBucketVersioningRequestPrivate(const S3ControlRequest::Action action,
                                   GetBucketVersioningRequest * const q);
    GetBucketVersioningRequestPrivate(const GetBucketVersioningRequestPrivate &other,
                                   GetBucketVersioningRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketVersioningRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
