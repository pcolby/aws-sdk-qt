// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "deletebucketinventoryconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketInventoryConfigurationResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketInventoryConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketInventoryConfigurationResponse(const DeleteBucketInventoryConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketInventoryConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketInventoryConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketInventoryConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
