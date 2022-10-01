// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSRESPONSE_H

#include "s3response.h"
#include "listbucketintelligenttieringconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketIntelligentTieringConfigurationsResponsePrivate;

class QTAWSS3_EXPORT ListBucketIntelligentTieringConfigurationsResponse : public S3Response {
    Q_OBJECT

public:
    ListBucketIntelligentTieringConfigurationsResponse(const ListBucketIntelligentTieringConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBucketIntelligentTieringConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketIntelligentTieringConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketIntelligentTieringConfigurationsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
