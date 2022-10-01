// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATERESPONSE_P_H
#define QTAWS_GETFLOWTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateResponse;

class GetFlowTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetFlowTemplateResponsePrivate(GetFlowTemplateResponse * const q);

    void parseGetFlowTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFlowTemplateResponse)
    Q_DISABLE_COPY(GetFlowTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
