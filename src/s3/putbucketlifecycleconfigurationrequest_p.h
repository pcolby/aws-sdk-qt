// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketLifecycleConfigurationRequest;

class PutBucketLifecycleConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketLifecycleConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketLifecycleConfigurationRequest * const q);
    PutBucketLifecycleConfigurationRequestPrivate(const PutBucketLifecycleConfigurationRequestPrivate &other,
                                   PutBucketLifecycleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketLifecycleConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
