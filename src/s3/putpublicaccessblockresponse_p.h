// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPUBLICACCESSBLOCKRESPONSE_P_H
#define QTAWS_PUTPUBLICACCESSBLOCKRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutPublicAccessBlockResponse;

class PutPublicAccessBlockResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutPublicAccessBlockResponsePrivate(PutPublicAccessBlockResponse * const q);

    void parsePutPublicAccessBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPublicAccessBlockResponse)
    Q_DISABLE_COPY(PutPublicAccessBlockResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
