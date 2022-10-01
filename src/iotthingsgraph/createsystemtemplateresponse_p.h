// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMTEMPLATERESPONSE_P_H
#define QTAWS_CREATESYSTEMTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemTemplateResponse;

class CreateSystemTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit CreateSystemTemplateResponsePrivate(CreateSystemTemplateResponse * const q);

    void parseCreateSystemTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSystemTemplateResponse)
    Q_DISABLE_COPY(CreateSystemTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
