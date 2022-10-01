// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATERESPONSE_P_H
#define QTAWS_GETSYSTEMTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateResponse;

class GetSystemTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetSystemTemplateResponsePrivate(GetSystemTemplateResponse * const q);

    void parseGetSystemTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSystemTemplateResponse)
    Q_DISABLE_COPY(GetSystemTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
