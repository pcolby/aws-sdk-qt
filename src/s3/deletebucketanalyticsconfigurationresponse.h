// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBUCKETANALYTICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "deletebucketanalyticsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketAnalyticsConfigurationResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketAnalyticsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketAnalyticsConfigurationResponse(const DeleteBucketAnalyticsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketAnalyticsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketAnalyticsConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketAnalyticsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
