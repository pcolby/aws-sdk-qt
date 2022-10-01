// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDGENERATIONJOBRESPONSE_P_H
#define QTAWS_CREATEWORLDGENERATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldGenerationJobResponse;

class CreateWorldGenerationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateWorldGenerationJobResponsePrivate(CreateWorldGenerationJobResponse * const q);

    void parseCreateWorldGenerationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorldGenerationJobResponse)
    Q_DISABLE_COPY(CreateWorldGenerationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
