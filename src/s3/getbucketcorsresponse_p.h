// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETCORSRESPONSE_P_H
#define QTAWS_GETBUCKETCORSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketCorsResponse;

class GetBucketCorsResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketCorsResponsePrivate(GetBucketCorsResponse * const q);

    void parseGetBucketCorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketCorsResponse)
    Q_DISABLE_COPY(GetBucketCorsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
