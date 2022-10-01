// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketanalyticsconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketAnalyticsConfigurationsRequest;

class ListBucketAnalyticsConfigurationsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketAnalyticsConfigurationsRequestPrivate(const S3Request::Action action,
                                   ListBucketAnalyticsConfigurationsRequest * const q);
    ListBucketAnalyticsConfigurationsRequestPrivate(const ListBucketAnalyticsConfigurationsRequestPrivate &other,
                                   ListBucketAnalyticsConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketAnalyticsConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
