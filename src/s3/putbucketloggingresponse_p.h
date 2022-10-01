// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLOGGINGRESPONSE_P_H
#define QTAWS_PUTBUCKETLOGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketLoggingResponse;

class PutBucketLoggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketLoggingResponsePrivate(PutBucketLoggingResponse * const q);

    void parsePutBucketLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketLoggingResponse)
    Q_DISABLE_COPY(PutBucketLoggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
