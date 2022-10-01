// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETMETRICSCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETMETRICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketMetricsConfigurationRequest;

class DeleteBucketMetricsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketMetricsConfigurationRequestPrivate(const S3Request::Action action,
                                   DeleteBucketMetricsConfigurationRequest * const q);
    DeleteBucketMetricsConfigurationRequestPrivate(const DeleteBucketMetricsConfigurationRequestPrivate &other,
                                   DeleteBucketMetricsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketMetricsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
