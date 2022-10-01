// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListBucketAnalyticsConfigurationsResponse;

class ListBucketAnalyticsConfigurationsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListBucketAnalyticsConfigurationsResponsePrivate(ListBucketAnalyticsConfigurationsResponse * const q);

    void parseListBucketAnalyticsConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBucketAnalyticsConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketAnalyticsConfigurationsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
