// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDGENERATIONJOBRESPONSE_P_H
#define QTAWS_CANCELWORLDGENERATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldGenerationJobResponse;

class CancelWorldGenerationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CancelWorldGenerationJobResponsePrivate(CancelWorldGenerationJobResponse * const q);

    void parseCancelWorldGenerationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelWorldGenerationJobResponse)
    Q_DISABLE_COPY(CancelWorldGenerationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
