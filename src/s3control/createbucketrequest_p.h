// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETREQUEST_P_H
#define QTAWS_CREATEBUCKETREQUEST_P_H

#include "s3controlrequest_p.h"
#include "createbucketrequest.h"

namespace QtAws {
namespace S3Control {

class CreateBucketRequest;

class CreateBucketRequestPrivate : public S3ControlRequestPrivate {

public:
    CreateBucketRequestPrivate(const S3ControlRequest::Action action,
                                   CreateBucketRequest * const q);
    CreateBucketRequestPrivate(const CreateBucketRequestPrivate &other,
                                   CreateBucketRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBucketRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
