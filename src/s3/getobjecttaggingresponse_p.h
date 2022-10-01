// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTAGGINGRESPONSE_P_H
#define QTAWS_GETOBJECTTAGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetObjectTaggingResponse;

class GetObjectTaggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetObjectTaggingResponsePrivate(GetObjectTaggingResponse * const q);

    void parseGetObjectTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectTaggingResponse)
    Q_DISABLE_COPY(GetObjectTaggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
