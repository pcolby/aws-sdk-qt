// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETANALYTICSCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBUCKETANALYTICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "putbucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAnalyticsConfigurationRequest;

class PutBucketAnalyticsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    PutBucketAnalyticsConfigurationRequestPrivate(const S3Request::Action action,
                                   PutBucketAnalyticsConfigurationRequest * const q);
    PutBucketAnalyticsConfigurationRequestPrivate(const PutBucketAnalyticsConfigurationRequestPrivate &other,
                                   PutBucketAnalyticsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBucketAnalyticsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
