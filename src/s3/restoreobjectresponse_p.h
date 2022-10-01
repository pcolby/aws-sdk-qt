// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREOBJECTRESPONSE_P_H
#define QTAWS_RESTOREOBJECTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class RestoreObjectResponse;

class RestoreObjectResponsePrivate : public S3ResponsePrivate {

public:

    explicit RestoreObjectResponsePrivate(RestoreObjectResponse * const q);

    void parseRestoreObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreObjectResponse)
    Q_DISABLE_COPY(RestoreObjectResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
