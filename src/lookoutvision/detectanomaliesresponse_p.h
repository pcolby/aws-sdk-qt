// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTANOMALIESRESPONSE_P_H
#define QTAWS_DETECTANOMALIESRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class DetectAnomaliesResponse;

class DetectAnomaliesResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit DetectAnomaliesResponsePrivate(DetectAnomaliesResponse * const q);

    void parseDetectAnomaliesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectAnomaliesResponse)
    Q_DISABLE_COPY(DetectAnomaliesResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
