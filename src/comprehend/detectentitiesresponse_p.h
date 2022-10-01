// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESRESPONSE_P_H
#define QTAWS_DETECTENTITIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectEntitiesResponse;

class DetectEntitiesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectEntitiesResponsePrivate(DetectEntitiesResponse * const q);

    void parseDetectEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectEntitiesResponse)
    Q_DISABLE_COPY(DetectEntitiesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
