// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTASKTEMPLATERESPONSE_P_H
#define QTAWS_GETTASKTEMPLATERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class GetTaskTemplateResponse;

class GetTaskTemplateResponsePrivate : public ConnectResponsePrivate {

public:

    explicit GetTaskTemplateResponsePrivate(GetTaskTemplateResponse * const q);

    void parseGetTaskTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTaskTemplateResponse)
    Q_DISABLE_COPY(GetTaskTemplateResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
