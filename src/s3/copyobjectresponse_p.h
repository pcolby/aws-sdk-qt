// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOBJECTRESPONSE_P_H
#define QTAWS_COPYOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class CopyObjectResponse;

class CopyObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit CopyObjectResponsePrivate(CopyObjectResponse * const q);

    void parseCopyObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyObjectResponse)
    Q_DISABLE_COPY(CopyObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
