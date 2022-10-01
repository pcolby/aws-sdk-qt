// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketIntelligentTieringConfigurationResponse;

class GetBucketIntelligentTieringConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketIntelligentTieringConfigurationResponsePrivate(GetBucketIntelligentTieringConfigurationResponse * const q);

    void parseGetBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(GetBucketIntelligentTieringConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
