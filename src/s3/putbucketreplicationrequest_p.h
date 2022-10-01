// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREPLICATIONREQUEST_P_H
#define QTAWS_PUTBUCKETREPLICATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketReplicationRequest;

class PutBucketReplicationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketReplicationRequestPrivate(const S3Request::Action action,
                                   PutBucketReplicationRequest * const q);
    PutBucketReplicationRequestPrivate(const PutBucketReplicationRequestPrivate &other,
                                   PutBucketReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
