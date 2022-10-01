// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_SEARCHFLOWEXECUTIONSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowExecutionsResponse;

class SearchFlowExecutionsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchFlowExecutionsResponsePrivate(SearchFlowExecutionsResponse * const q);

    void parseSearchFlowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchFlowExecutionsResponse)
    Q_DISABLE_COPY(SearchFlowExecutionsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
