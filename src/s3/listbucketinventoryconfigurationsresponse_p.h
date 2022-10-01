// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTBUCKETINVENTORYCONFIGURATIONSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListBucketInventoryConfigurationsResponse;

class ListBucketInventoryConfigurationsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListBucketInventoryConfigurationsResponsePrivate(ListBucketInventoryConfigurationsResponse * const q);

    void parseListBucketInventoryConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBucketInventoryConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketInventoryConfigurationsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
