// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREPLICATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETREPLICATIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketReplicationRequest;

class DeleteBucketReplicationRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketReplicationRequestPrivate(const S3Request::Action action,
                                   DeleteBucketReplicationRequest * const q);
    DeleteBucketReplicationRequestPrivate(const DeleteBucketReplicationRequestPrivate &other,
                                   DeleteBucketReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
