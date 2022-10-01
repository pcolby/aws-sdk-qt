// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINVENTORYCONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETINVENTORYCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketInventoryConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketInventoryConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketInventoryConfigurationResponse(const GetBucketInventoryConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketInventoryConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketInventoryConfigurationResponse)
    Q_DISABLE_COPY(GetBucketInventoryConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
