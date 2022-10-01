// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETANALYTICSCONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETANALYTICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAnalyticsConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketAnalyticsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketAnalyticsConfigurationResponse(const GetBucketAnalyticsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketAnalyticsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAnalyticsConfigurationResponse)
    Q_DISABLE_COPY(GetBucketAnalyticsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
