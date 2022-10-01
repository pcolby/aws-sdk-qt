// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINVENTORYCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETINVENTORYCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketInventoryConfigurationResponse;

class GetBucketInventoryConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketInventoryConfigurationResponsePrivate(GetBucketInventoryConfigurationResponse * const q);

    void parseGetBucketInventoryConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketInventoryConfigurationResponse)
    Q_DISABLE_COPY(GetBucketInventoryConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
