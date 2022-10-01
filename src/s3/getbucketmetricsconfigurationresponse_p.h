// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICSCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETMETRICSCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketMetricsConfigurationResponse;

class GetBucketMetricsConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketMetricsConfigurationResponsePrivate(GetBucketMetricsConfigurationResponse * const q);

    void parseGetBucketMetricsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(GetBucketMetricsConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
