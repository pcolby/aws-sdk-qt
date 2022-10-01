// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTSENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartSentimentDetectionJobResponse;

class StartSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartSentimentDetectionJobResponsePrivate(StartSentimentDetectionJobResponse * const q);

    void parseStartSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StartSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
