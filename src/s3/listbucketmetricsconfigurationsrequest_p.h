// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETMETRICSCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTBUCKETMETRICSCONFIGURATIONSREQUEST_P_H

#include "s3request_p.h"
#include "listbucketmetricsconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketMetricsConfigurationsRequest;

class ListBucketMetricsConfigurationsRequestPrivate : public S3RequestPrivate {

public:
    ListBucketMetricsConfigurationsRequestPrivate(const S3Request::Action action,
                                   ListBucketMetricsConfigurationsRequest * const q);
    ListBucketMetricsConfigurationsRequestPrivate(const ListBucketMetricsConfigurationsRequestPrivate &other,
                                   ListBucketMetricsConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBucketMetricsConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
