// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTAGGINGRESPONSE_P_H
#define QTAWS_DELETEJOBTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteJobTaggingResponse;

class DeleteJobTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteJobTaggingResponsePrivate(DeleteJobTaggingResponse * const q);

    void parseDeleteJobTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobTaggingResponse)
    Q_DISABLE_COPY(DeleteJobTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
