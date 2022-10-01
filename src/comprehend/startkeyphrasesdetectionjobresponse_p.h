// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTKEYPHRASESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTKEYPHRASESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartKeyPhrasesDetectionJobResponse;

class StartKeyPhrasesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartKeyPhrasesDetectionJobResponsePrivate(StartKeyPhrasesDetectionJobResponse * const q);

    void parseStartKeyPhrasesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(StartKeyPhrasesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
