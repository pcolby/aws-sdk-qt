// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "getbucketnotificationconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketNotificationConfigurationResponsePrivate;

class QTAWSS3_EXPORT GetBucketNotificationConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketNotificationConfigurationResponse(const GetBucketNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketNotificationConfigurationResponse)
    Q_DISABLE_COPY(GetBucketNotificationConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
