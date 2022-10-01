// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETVERSIONINGRESPONSE_P_H
#define QTAWS_GETBUCKETVERSIONINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketVersioningResponse;

class GetBucketVersioningResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketVersioningResponsePrivate(GetBucketVersioningResponse * const q);

    void parseGetBucketVersioningResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketVersioningResponse)
    Q_DISABLE_COPY(GetBucketVersioningResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
