// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETTAGGINGREQUEST_P_H
#define QTAWS_PUTBUCKETTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putbuckettaggingrequest.h"

namespace QtAws {
namespace S3Control {

class PutBucketTaggingRequest;

class PutBucketTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    PutBucketTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   PutBucketTaggingRequest * const q);
    PutBucketTaggingRequestPrivate(const PutBucketTaggingRequestPrivate &other,
                                   PutBucketTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
