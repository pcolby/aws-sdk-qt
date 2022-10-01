// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEENTITYFROMTHINGRESPONSE_P_H
#define QTAWS_DISSOCIATEENTITYFROMTHINGRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DissociateEntityFromThingResponse;

class DissociateEntityFromThingResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DissociateEntityFromThingResponsePrivate(DissociateEntityFromThingResponse * const q);

    void parseDissociateEntityFromThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DissociateEntityFromThingResponse)
    Q_DISABLE_COPY(DissociateEntityFromThingResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
