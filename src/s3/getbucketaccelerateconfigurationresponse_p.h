// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCELERATECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETACCELERATECONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketAccelerateConfigurationResponse;

class GetBucketAccelerateConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketAccelerateConfigurationResponsePrivate(GetBucketAccelerateConfigurationResponse * const q);

    void parseGetBucketAccelerateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketAccelerateConfigurationResponse)
    Q_DISABLE_COPY(GetBucketAccelerateConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
