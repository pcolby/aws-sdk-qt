// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWTEMPLATERESPONSE_P_H
#define QTAWS_DELETEFLOWTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteFlowTemplateResponse;

class DeleteFlowTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeleteFlowTemplateResponsePrivate(DeleteFlowTemplateResponse * const q);

    void parseDeleteFlowTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFlowTemplateResponse)
    Q_DISABLE_COPY(DeleteFlowTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
