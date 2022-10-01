// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSRESPONSE_H

#include "s3response.h"
#include "listbucketinventoryconfigurationsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketInventoryConfigurationsResponsePrivate;

class QTAWSS3_EXPORT ListBucketInventoryConfigurationsResponse : public S3Response {
    Q_OBJECT

public:
    ListBucketInventoryConfigurationsResponse(const ListBucketInventoryConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBucketInventoryConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketInventoryConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketInventoryConfigurationsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
