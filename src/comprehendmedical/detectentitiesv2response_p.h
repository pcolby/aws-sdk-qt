// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESV2RESPONSE_P_H
#define QTAWS_DETECTENTITIESV2RESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesV2Response;

class DetectEntitiesV2ResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DetectEntitiesV2ResponsePrivate(DetectEntitiesV2Response * const q);

    void parseDetectEntitiesV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectEntitiesV2Response)
    Q_DISABLE_COPY(DetectEntitiesV2ResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
