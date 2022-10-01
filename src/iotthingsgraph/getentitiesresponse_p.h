// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITIESRESPONSE_P_H
#define QTAWS_GETENTITIESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetEntitiesResponse;

class GetEntitiesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetEntitiesResponsePrivate(GetEntitiesResponse * const q);

    void parseGetEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEntitiesResponse)
    Q_DISABLE_COPY(GetEntitiesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
