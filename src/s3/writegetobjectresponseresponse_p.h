// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITEGETOBJECTRESPONSERESPONSE_P_H
#define QTAWS_WRITEGETOBJECTRESPONSERESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class WriteGetObjectResponseResponse;

class WriteGetObjectResponseResponsePrivate : public S3ResponsePrivate {

public:

    explicit WriteGetObjectResponseResponsePrivate(WriteGetObjectResponseResponse * const q);

    void parseWriteGetObjectResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WriteGetObjectResponseResponse)
    Q_DISABLE_COPY(WriteGetObjectResponseResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
