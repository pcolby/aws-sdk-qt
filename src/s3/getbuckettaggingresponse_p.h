// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETTAGGINGRESPONSE_P_H
#define QTAWS_GETBUCKETTAGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketTaggingResponse;

class GetBucketTaggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketTaggingResponsePrivate(GetBucketTaggingResponse * const q);

    void parseGetBucketTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketTaggingResponse)
    Q_DISABLE_COPY(GetBucketTaggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
