// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETANALYTICSCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETANALYTICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAnalyticsConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketAnalyticsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketAnalyticsConfigurationResponse(const PutBucketAnalyticsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketAnalyticsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAnalyticsConfigurationResponse)
    Q_DISABLE_COPY(PutBucketAnalyticsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
