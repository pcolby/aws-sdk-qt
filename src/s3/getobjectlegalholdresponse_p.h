// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLEGALHOLDRESPONSE_P_H
#define QTAWS_GETOBJECTLEGALHOLDRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectLegalHoldResponse;

class GetObjectLegalHoldResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectLegalHoldResponsePrivate(GetObjectLegalHoldResponse * const q);

    void parseGetObjectLegalHoldResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectLegalHoldResponse)
    Q_DISABLE_COPY(GetObjectLegalHoldResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
