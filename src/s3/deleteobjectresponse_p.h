// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTRESPONSE_P_H
#define QTAWS_DELETEOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteObjectResponse;

class DeleteObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteObjectResponsePrivate(DeleteObjectResponse * const q);

    void parseDeleteObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteObjectResponse)
    Q_DISABLE_COPY(DeleteObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
