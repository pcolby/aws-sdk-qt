// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREPLICATIONREQUEST_P_H
#define QTAWS_GETBUCKETREPLICATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketReplicationRequest;

class GetBucketReplicationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketReplicationRequestPrivate(const S3Request::Action action,
                                   GetBucketReplicationRequest * const q);
    GetBucketReplicationRequestPrivate(const GetBucketReplicationRequestPrivate &other,
                                   GetBucketReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
