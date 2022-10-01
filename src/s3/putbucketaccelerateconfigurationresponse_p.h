// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACCELERATECONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETACCELERATECONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketAccelerateConfigurationResponse;

class PutBucketAccelerateConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketAccelerateConfigurationResponsePrivate(PutBucketAccelerateConfigurationResponse * const q);

    void parsePutBucketAccelerateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketAccelerateConfigurationResponse)
    Q_DISABLE_COPY(PutBucketAccelerateConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
