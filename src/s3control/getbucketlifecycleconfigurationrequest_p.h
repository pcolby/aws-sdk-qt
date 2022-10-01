// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getbucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketLifecycleConfigurationRequest;

class GetBucketLifecycleConfigurationRequestPrivate : public S3ControlRequestPrivate {

public:
    GetBucketLifecycleConfigurationRequestPrivate(const S3ControlRequest::Action action,
                                   GetBucketLifecycleConfigurationRequest * const q);
    GetBucketLifecycleConfigurationRequestPrivate(const GetBucketLifecycleConfigurationRequestPrivate &other,
                                   GetBucketLifecycleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketLifecycleConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
