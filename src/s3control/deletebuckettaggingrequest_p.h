// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETTAGGINGREQUEST_P_H
#define QTAWS_DELETEBUCKETTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletebuckettaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketTaggingRequest;

class DeleteBucketTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteBucketTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteBucketTaggingRequest * const q);
    DeleteBucketTaggingRequestPrivate(const DeleteBucketTaggingRequestPrivate &other,
                                   DeleteBucketTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
