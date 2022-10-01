// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBRESPONSE_P_H
#define QTAWS_CREATEJOBRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class CreateJobResponse;

class CreateJobResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit CreateJobResponsePrivate(CreateJobResponse * const q);

    void parseCreateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJobResponse)
    Q_DISABLE_COPY(CreateJobResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
