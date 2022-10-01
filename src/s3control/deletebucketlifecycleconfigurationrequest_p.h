// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETLIFECYCLECONFIGURATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletebucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketLifecycleConfigurationRequest;

class DeleteBucketLifecycleConfigurationRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteBucketLifecycleConfigurationRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteBucketLifecycleConfigurationRequest * const q);
    DeleteBucketLifecycleConfigurationRequestPrivate(const DeleteBucketLifecycleConfigurationRequestPrivate &other,
                                   DeleteBucketLifecycleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketLifecycleConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
