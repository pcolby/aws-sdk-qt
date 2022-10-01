// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETMETRICSCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTBUCKETMETRICSCONFIGURATIONSRESPONSE_H

#include "s3response.h"
#include "listbucketmetricsconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketMetricsConfigurationsResponsePrivate;

class QTAWSS3_EXPORT ListBucketMetricsConfigurationsResponse : public S3Response {
    Q_OBJECT

public:
    ListBucketMetricsConfigurationsResponse(const ListBucketMetricsConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBucketMetricsConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketMetricsConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketMetricsConfigurationsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
