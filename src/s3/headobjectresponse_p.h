// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADOBJECTRESPONSE_P_H
#define QTAWS_HEADOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class HeadObjectResponse;

class HeadObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit HeadObjectResponsePrivate(HeadObjectResponse * const q);

    void parseHeadObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(HeadObjectResponse)
    Q_DISABLE_COPY(HeadObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
