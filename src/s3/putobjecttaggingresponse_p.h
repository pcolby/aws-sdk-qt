// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTTAGGINGRESPONSE_P_H
#define QTAWS_PUTOBJECTTAGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectTaggingResponse;

class PutObjectTaggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectTaggingResponsePrivate(PutObjectTaggingResponse * const q);

    void parsePutObjectTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectTaggingResponse)
    Q_DISABLE_COPY(PutObjectTaggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
