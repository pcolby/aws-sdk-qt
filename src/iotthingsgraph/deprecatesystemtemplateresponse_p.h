// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATESYSTEMTEMPLATERESPONSE_P_H
#define QTAWS_DEPRECATESYSTEMTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateSystemTemplateResponse;

class DeprecateSystemTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeprecateSystemTemplateResponsePrivate(DeprecateSystemTemplateResponse * const q);

    void parseDeprecateSystemTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprecateSystemTemplateResponse)
    Q_DISABLE_COPY(DeprecateSystemTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
