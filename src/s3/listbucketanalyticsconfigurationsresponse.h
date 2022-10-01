// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTBUCKETANALYTICSCONFIGURATIONSRESPONSE_H

#include "s3response.h"
#include "listbucketanalyticsconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketAnalyticsConfigurationsResponsePrivate;

class QTAWSS3_EXPORT ListBucketAnalyticsConfigurationsResponse : public S3Response {
    Q_OBJECT

public:
    ListBucketAnalyticsConfigurationsResponse(const ListBucketAnalyticsConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBucketAnalyticsConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketAnalyticsConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketAnalyticsConfigurationsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
