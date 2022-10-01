// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETMETRICSCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETMETRICSCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketMetricsConfigurationResponse;

class DeleteBucketMetricsConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketMetricsConfigurationResponsePrivate(DeleteBucketMetricsConfigurationResponse * const q);

    void parseDeleteBucketMetricsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketMetricsConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
