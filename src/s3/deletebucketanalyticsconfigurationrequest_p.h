// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONREQUEST_P_H

#include "s3request_p.h"
#include "deletebucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketAnalyticsConfigurationRequest;

class DeleteBucketAnalyticsConfigurationRequestPrivate : public S3RequestPrivate {

public:
    DeleteBucketAnalyticsConfigurationRequestPrivate(const S3Request::Action action,
                                   DeleteBucketAnalyticsConfigurationRequest * const q);
    DeleteBucketAnalyticsConfigurationRequestPrivate(const DeleteBucketAnalyticsConfigurationRequestPrivate &other,
                                   DeleteBucketAnalyticsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBucketAnalyticsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
