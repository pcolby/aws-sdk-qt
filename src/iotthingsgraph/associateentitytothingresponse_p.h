// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITYTOTHINGRESPONSE_P_H
#define QTAWS_ASSOCIATEENTITYTOTHINGRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class AssociateEntityToThingResponse;

class AssociateEntityToThingResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit AssociateEntityToThingResponsePrivate(AssociateEntityToThingResponse * const q);

    void parseAssociateEntityToThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEntityToThingResponse)
    Q_DISABLE_COPY(AssociateEntityToThingResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
