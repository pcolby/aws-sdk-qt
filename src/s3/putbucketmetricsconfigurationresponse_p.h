// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETMETRICSCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETMETRICSCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketMetricsConfigurationResponse;

class PutBucketMetricsConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketMetricsConfigurationResponsePrivate(PutBucketMetricsConfigurationResponse * const q);

    void parsePutBucketMetricsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(PutBucketMetricsConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
