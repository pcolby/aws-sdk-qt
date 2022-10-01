// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWTEMPLATERESPONSE_P_H
#define QTAWS_CREATEFLOWTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateFlowTemplateResponse;

class CreateFlowTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit CreateFlowTemplateResponsePrivate(CreateFlowTemplateResponse * const q);

    void parseCreateFlowTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFlowTemplateResponse)
    Q_DISABLE_COPY(CreateFlowTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
