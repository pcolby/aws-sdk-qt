// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACCELERATECONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETACCELERATECONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketaccelerateconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAccelerateConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketAccelerateConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketAccelerateConfigurationResponse(const PutBucketAccelerateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketAccelerateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAccelerateConfigurationResponse)
    Q_DISABLE_COPY(PutBucketAccelerateConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
