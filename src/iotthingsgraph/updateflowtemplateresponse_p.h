// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEFLOWTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateFlowTemplateResponse;

class UpdateFlowTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit UpdateFlowTemplateResponsePrivate(UpdateFlowTemplateResponse * const q);

    void parseUpdateFlowTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFlowTemplateResponse)
    Q_DISABLE_COPY(UpdateFlowTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
