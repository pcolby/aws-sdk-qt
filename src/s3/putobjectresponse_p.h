// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRESPONSE_P_H
#define QTAWS_PUTOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectResponse;

class PutObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectResponsePrivate(PutObjectResponse * const q);

    void parsePutObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectResponse)
    Q_DISABLE_COPY(PutObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
