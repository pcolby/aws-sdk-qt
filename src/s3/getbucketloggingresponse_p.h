// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOGGINGRESPONSE_P_H
#define QTAWS_GETBUCKETLOGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketLoggingResponse;

class GetBucketLoggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketLoggingResponsePrivate(GetBucketLoggingResponse * const q);

    void parseGetBucketLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketLoggingResponse)
    Q_DISABLE_COPY(GetBucketLoggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
