// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETMETRICSCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETMETRICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketMetricsConfigurationRequest;

class PutBucketMetricsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketMetricsConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketMetricsConfigurationRequest * const q);
    PutBucketMetricsConfigurationRequestPrivate(const PutBucketMetricsConfigurationRequestPrivate &other,
                                   PutBucketMetricsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketMetricsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
