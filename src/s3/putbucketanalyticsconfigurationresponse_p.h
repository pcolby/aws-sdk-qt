// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETANALYTICSCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETANALYTICSCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketAnalyticsConfigurationResponse;

class PutBucketAnalyticsConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketAnalyticsConfigurationResponsePrivate(PutBucketAnalyticsConfigurationResponse * const q);

    void parsePutBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketAnalyticsConfigurationResponse)
    Q_DISABLE_COPY(PutBucketAnalyticsConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
