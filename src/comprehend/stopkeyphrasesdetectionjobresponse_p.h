// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPKEYPHRASESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPKEYPHRASESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopKeyPhrasesDetectionJobResponse;

class StopKeyPhrasesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopKeyPhrasesDetectionJobResponsePrivate(StopKeyPhrasesDetectionJobResponse * const q);

    void parseStopKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(StopKeyPhrasesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
