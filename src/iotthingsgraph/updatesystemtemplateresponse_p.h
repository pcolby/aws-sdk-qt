// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESYSTEMTEMPLATERESPONSE_P_H
#define QTAWS_UPDATESYSTEMTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateSystemTemplateResponse;

class UpdateSystemTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit UpdateSystemTemplateResponsePrivate(UpdateSystemTemplateResponse * const q);

    void parseUpdateSystemTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSystemTemplateResponse)
    Q_DISABLE_COPY(UpdateSystemTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
