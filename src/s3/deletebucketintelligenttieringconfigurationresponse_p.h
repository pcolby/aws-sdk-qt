// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETINTELLIGENTTIERINGCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketIntelligentTieringConfigurationResponse;

class DeleteBucketIntelligentTieringConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketIntelligentTieringConfigurationResponsePrivate(DeleteBucketIntelligentTieringConfigurationResponse * const q);

    void parseDeleteBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketIntelligentTieringConfigurationResponse)
    Q_DISABLE_COPY(DeleteBucketIntelligentTieringConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
