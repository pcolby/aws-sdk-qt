// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETCORSRESPONSE_P_H
#define QTAWS_PUTBUCKETCORSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketCorsResponse;

class PutBucketCorsResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketCorsResponsePrivate(PutBucketCorsResponse * const q);

    void parsePutBucketCorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketCorsResponse)
    Q_DISABLE_COPY(PutBucketCorsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
