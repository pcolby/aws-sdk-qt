// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopDominantLanguageDetectionJobResponse;

class StopDominantLanguageDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopDominantLanguageDetectionJobResponsePrivate(StopDominantLanguageDetectionJobResponse * const q);

    void parseStopDominantLanguageDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(StopDominantLanguageDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
