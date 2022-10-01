// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETINVENTORYCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketInventoryConfigurationResponse;

class DeleteBucketInventoryConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketInventoryConfigurationResponsePrivate(DeleteBucketInventoryConfigurationResponse * const q);

    void parseDeleteBucketInventoryConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketInventoryConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketInventoryConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
