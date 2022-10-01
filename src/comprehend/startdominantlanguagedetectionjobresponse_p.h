// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartDominantLanguageDetectionJobResponse;

class StartDominantLanguageDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartDominantLanguageDetectionJobResponsePrivate(StartDominantLanguageDetectionJobResponse * const q);

    void parseStartDominantLanguageDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(StartDominantLanguageDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
