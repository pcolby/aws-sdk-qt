// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEFLOWTEMPLATERESPONSE_P_H
#define QTAWS_DEPRECATEFLOWTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateFlowTemplateResponse;

class DeprecateFlowTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeprecateFlowTemplateResponsePrivate(DeprecateFlowTemplateResponse * const q);

    void parseDeprecateFlowTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateFlowTemplateResponse)
    Q_DISABLE_COPY(DeprecateFlowTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
