// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICSCONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETMETRICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketMetricsConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketMetricsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketMetricsConfigurationResponse(const GetBucketMetricsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketMetricsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(GetBucketMetricsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
