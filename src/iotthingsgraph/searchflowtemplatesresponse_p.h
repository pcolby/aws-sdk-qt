// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWTEMPLATESRESPONSE_P_H
#define QTAWS_SEARCHFLOWTEMPLATESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowTemplatesResponse;

class SearchFlowTemplatesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchFlowTemplatesResponsePrivate(SearchFlowTemplatesResponse * const q);

    void parseSearchFlowTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchFlowTemplatesResponse)
    Q_DISABLE_COPY(SearchFlowTemplatesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
