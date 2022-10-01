// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBTAGGINGRESPONSE_P_H
#define QTAWS_PUTJOBTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutJobTaggingResponse;

class PutJobTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutJobTaggingResponsePrivate(PutJobTaggingResponse * const q);

    void parsePutJobTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutJobTaggingResponse)
    Q_DISABLE_COPY(PutJobTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
