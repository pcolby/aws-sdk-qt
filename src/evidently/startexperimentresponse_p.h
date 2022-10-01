// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPERIMENTRESPONSE_P_H
#define QTAWS_STARTEXPERIMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class StartExperimentResponse;

class StartExperimentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit StartExperimentResponsePrivate(StartExperimentResponse * const q);

    void parseStartExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartExperimentResponse)
    Q_DISABLE_COPY(StartExperimentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
