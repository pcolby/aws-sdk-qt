// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMTEMPLATERESPONSE_P_H
#define QTAWS_DELETESYSTEMTEMPLATERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemTemplateResponse;

class DeleteSystemTemplateResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeleteSystemTemplateResponsePrivate(DeleteSystemTemplateResponse * const q);

    void parseDeleteSystemTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSystemTemplateResponse)
    Q_DISABLE_COPY(DeleteSystemTemplateResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
