// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICSCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETMETRICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketMetricsConfigurationRequest;

class GetBucketMetricsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketMetricsConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketMetricsConfigurationRequest * const q);
    GetBucketMetricsConfigurationRequestPrivate(const GetBucketMetricsConfigurationRequestPrivate &other,
                                   GetBucketMetricsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketMetricsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
