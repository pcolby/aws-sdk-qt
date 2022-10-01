// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETANALYTICSCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBUCKETANALYTICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "getbucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAnalyticsConfigurationRequest;

class GetBucketAnalyticsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    GetBucketAnalyticsConfigurationRequestPrivate(const S3Request::Action action,
                                   GetBucketAnalyticsConfigurationRequest * const q);
    GetBucketAnalyticsConfigurationRequestPrivate(const GetBucketAnalyticsConfigurationRequestPrivate &other,
                                   GetBucketAnalyticsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketAnalyticsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
