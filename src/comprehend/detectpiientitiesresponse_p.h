// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPIIENTITIESRESPONSE_P_H
#define QTAWS_DETECTPIIENTITIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectPiiEntitiesResponse;

class DetectPiiEntitiesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectPiiEntitiesResponsePrivate(DetectPiiEntitiesResponse * const q);

    void parseDetectPiiEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectPiiEntitiesResponse)
    Q_DISABLE_COPY(DetectPiiEntitiesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
