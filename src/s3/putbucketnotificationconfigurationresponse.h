// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketnotificationconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketNotificationConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketNotificationConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketNotificationConfigurationResponse(const PutBucketNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketNotificationConfigurationResponse)
    Q_DISABLE_COPY(PutBucketNotificationConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
