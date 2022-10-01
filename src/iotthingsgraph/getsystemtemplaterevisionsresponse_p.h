// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREVISIONSRESPONSE_P_H
#define QTAWS_GETSYSTEMTEMPLATEREVISIONSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRevisionsResponse;

class GetSystemTemplateRevisionsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetSystemTemplateRevisionsResponsePrivate(GetSystemTemplateRevisionsResponse * const q);

    void parseGetSystemTemplateRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSystemTemplateRevisionsResponse)
    Q_DISABLE_COPY(GetSystemTemplateRevisionsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
