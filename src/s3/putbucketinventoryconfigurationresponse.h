// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINVENTORYCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETINVENTORYCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketInventoryConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketInventoryConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketInventoryConfigurationResponse(const PutBucketInventoryConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketInventoryConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketInventoryConfigurationResponse)
    Q_DISABLE_COPY(PutBucketInventoryConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
