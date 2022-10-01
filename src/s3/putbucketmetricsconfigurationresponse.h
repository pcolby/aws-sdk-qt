// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETMETRICSCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETMETRICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketMetricsConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketMetricsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketMetricsConfigurationResponse(const PutBucketMetricsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketMetricsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(PutBucketMetricsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
