// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketAnalyticsConfigurationResponse;

class DeleteBucketAnalyticsConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketAnalyticsConfigurationResponsePrivate(DeleteBucketAnalyticsConfigurationResponse * const q);

    void parseDeleteBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketAnalyticsConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketAnalyticsConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
