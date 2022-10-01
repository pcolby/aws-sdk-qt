// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLEGALHOLDRESPONSE_P_H
#define QTAWS_PUTOBJECTLEGALHOLDRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectLegalHoldResponse;

class PutObjectLegalHoldResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectLegalHoldResponsePrivate(PutObjectLegalHoldResponse * const q);

    void parsePutObjectLegalHoldResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectLegalHoldResponse)
    Q_DISABLE_COPY(PutObjectLegalHoldResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
