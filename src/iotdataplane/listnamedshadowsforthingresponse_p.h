// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDSHADOWSFORTHINGRESPONSE_P_H
#define QTAWS_LISTNAMEDSHADOWSFORTHINGRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class ListNamedShadowsForThingResponse;

class ListNamedShadowsForThingResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit ListNamedShadowsForThingResponsePrivate(ListNamedShadowsForThingResponse * const q);

    void parseListNamedShadowsForThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNamedShadowsForThingResponse)
    Q_DISABLE_COPY(ListNamedShadowsForThingResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
