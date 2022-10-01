// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketIntelligentTieringConfigurationResponse;

class PutBucketIntelligentTieringConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketIntelligentTieringConfigurationResponsePrivate(PutBucketIntelligentTieringConfigurationResponse * const q);

    void parsePutBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(PutBucketIntelligentTieringConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
