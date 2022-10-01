// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREQUEST_P_H
#define QTAWS_DELETEBUCKETREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletebucketrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketRequest;

class DeleteBucketRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteBucketRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteBucketRequest * const q);
    DeleteBucketRequestPrivate(const DeleteBucketRequestPrivate &other,
                                   DeleteBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
