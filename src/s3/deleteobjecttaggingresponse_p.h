// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTTAGGINGRESPONSE_P_H
#define QTAWS_DELETEOBJECTTAGGINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteObjectTaggingResponse;

class DeleteObjectTaggingResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteObjectTaggingResponsePrivate(DeleteObjectTaggingResponse * const q);

    void parseDeleteObjectTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteObjectTaggingResponse)
    Q_DISABLE_COPY(DeleteObjectTaggingResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
