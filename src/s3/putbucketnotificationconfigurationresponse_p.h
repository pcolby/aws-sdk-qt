// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketNotificationConfigurationResponse;

class PutBucketNotificationConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketNotificationConfigurationResponsePrivate(PutBucketNotificationConfigurationResponse * const q);

    void parsePutBucketNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketNotificationConfigurationResponse)
    Q_DISABLE_COPY(PutBucketNotificationConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
