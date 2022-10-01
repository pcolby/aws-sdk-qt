// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRESPONSE_P_H
#define QTAWS_GETOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectResponse;

class GetObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectResponsePrivate(GetObjectResponse * const q);

    void parseGetObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectResponse)
    Q_DISABLE_COPY(GetObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
