// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTJOBRESPONSE_P_H
#define QTAWS_CREATEEXPORTJOBRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateExportJobResponse;

class CreateExportJobResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateExportJobResponsePrivate(CreateExportJobResponse * const q);

    void parseCreateExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExportJobResponse)
    Q_DISABLE_COPY(CreateExportJobResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
