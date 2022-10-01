// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKTEMPLATERESPONSE_P_H
#define QTAWS_DELETETASKTEMPLATERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteTaskTemplateResponse;

class DeleteTaskTemplateResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteTaskTemplateResponsePrivate(DeleteTaskTemplateResponse * const q);

    void parseDeleteTaskTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTaskTemplateResponse)
    Q_DISABLE_COPY(DeleteTaskTemplateResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
