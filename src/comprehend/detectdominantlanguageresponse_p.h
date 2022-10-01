// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOMINANTLANGUAGERESPONSE_P_H
#define QTAWS_DETECTDOMINANTLANGUAGERESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectDominantLanguageResponse;

class DetectDominantLanguageResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectDominantLanguageResponsePrivate(DetectDominantLanguageResponse * const q);

    void parseDetectDominantLanguageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectDominantLanguageResponse)
    Q_DISABLE_COPY(DetectDominantLanguageResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
