// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListBucketIntelligentTieringConfigurationsResponse;

class ListBucketIntelligentTieringConfigurationsResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListBucketIntelligentTieringConfigurationsResponsePrivate(ListBucketIntelligentTieringConfigurationsResponse * const q);

    void parseListBucketIntelligentTieringConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBucketIntelligentTieringConfigurationsResponse)
    Q_DISABLE_COPY(ListBucketIntelligentTieringConfigurationsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
