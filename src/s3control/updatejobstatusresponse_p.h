// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSTATUSRESPONSE_P_H
#define QTAWS_UPDATEJOBSTATUSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class UpdateJobStatusResponse;

class UpdateJobStatusResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit UpdateJobStatusResponsePrivate(UpdateJobStatusResponse * const q);

    void parseUpdateJobStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobStatusResponse)
    Q_DISABLE_COPY(UpdateJobStatusResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
