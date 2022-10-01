// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREVISIONSRESPONSE_P_H
#define QTAWS_GETFLOWTEMPLATEREVISIONSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRevisionsResponse;

class GetFlowTemplateRevisionsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetFlowTemplateRevisionsResponsePrivate(GetFlowTemplateRevisionsResponse * const q);

    void parseGetFlowTemplateRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFlowTemplateRevisionsResponse)
    Q_DISABLE_COPY(GetFlowTemplateRevisionsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
