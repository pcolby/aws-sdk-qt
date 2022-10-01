// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETNOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketNotificationConfigurationResponse;

class GetBucketNotificationConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketNotificationConfigurationResponsePrivate(GetBucketNotificationConfigurationResponse * const q);

    void parseGetBucketNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketNotificationConfigurationResponse)
    Q_DISABLE_COPY(GetBucketNotificationConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
