// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETMETRICSCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTBUCKETMETRICSCONFIGURATIONSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListBucketMetricsConfigurationsResponse;

class ListBucketMetricsConfigurationsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListBucketMetricsConfigurationsResponsePrivate(ListBucketMetricsConfigurationsResponse * const q);

    void parseListBucketMetricsConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBucketMetricsConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketMetricsConfigurationsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
