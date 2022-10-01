// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXPERIMENTRESPONSE_P_H
#define QTAWS_STOPEXPERIMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class StopExperimentResponse;

class StopExperimentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit StopExperimentResponsePrivate(StopExperimentResponse * const q);

    void parseStopExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopExperimentResponse)
    Q_DISABLE_COPY(StopExperimentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
