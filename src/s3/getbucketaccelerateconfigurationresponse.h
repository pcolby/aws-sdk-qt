// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCELERATECONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETACCELERATECONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketaccelerateconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAccelerateConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketAccelerateConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketAccelerateConfigurationResponse(const GetBucketAccelerateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketAccelerateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAccelerateConfigurationResponse)
    Q_DISABLE_COPY(GetBucketAccelerateConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
