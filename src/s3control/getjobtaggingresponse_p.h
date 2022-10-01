// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTAGGINGRESPONSE_P_H
#define QTAWS_GETJOBTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetJobTaggingResponse;

class GetJobTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetJobTaggingResponsePrivate(GetJobTaggingResponse * const q);

    void parseGetJobTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobTaggingResponse)
    Q_DISABLE_COPY(GetJobTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
