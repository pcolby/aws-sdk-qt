// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHENTITIESRESPONSE_P_H
#define QTAWS_SEARCHENTITIESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchEntitiesResponse;

class SearchEntitiesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchEntitiesResponsePrivate(SearchEntitiesResponse * const q);

    void parseSearchEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchEntitiesResponse)
    Q_DISABLE_COPY(SearchEntitiesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
