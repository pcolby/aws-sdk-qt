// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBPRIORITYRESPONSE_P_H
#define QTAWS_UPDATEJOBPRIORITYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class UpdateJobPriorityResponse;

class UpdateJobPriorityResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit UpdateJobPriorityResponsePrivate(UpdateJobPriorityResponse * const q);

    void parseUpdateJobPriorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobPriorityResponse)
    Q_DISABLE_COPY(UpdateJobPriorityResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
