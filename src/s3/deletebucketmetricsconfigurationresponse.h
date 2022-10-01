// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETMETRICSCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBUCKETMETRICSCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "deletebucketmetricsconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketMetricsConfigurationResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketMetricsConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketMetricsConfigurationResponse(const DeleteBucketMetricsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketMetricsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketMetricsConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketMetricsConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
