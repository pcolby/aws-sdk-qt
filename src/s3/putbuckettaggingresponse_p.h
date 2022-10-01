// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETTAGGINGRESPONSE_P_H
#define QTAWS_PUTBUCKETTAGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketTaggingResponse;

class PutBucketTaggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketTaggingResponsePrivate(PutBucketTaggingResponse * const q);

    void parsePutBucketTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketTaggingResponse)
    Q_DISABLE_COPY(PutBucketTaggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
