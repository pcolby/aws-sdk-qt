// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDEXPORTJOBRESPONSE_P_H
#define QTAWS_CANCELWORLDEXPORTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldExportJobResponse;

class CancelWorldExportJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CancelWorldExportJobResponsePrivate(CancelWorldExportJobResponse * const q);

    void parseCancelWorldExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelWorldExportJobResponse)
    Q_DISABLE_COPY(CancelWorldExportJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
