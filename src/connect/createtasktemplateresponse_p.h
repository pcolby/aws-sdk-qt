// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKTEMPLATERESPONSE_P_H
#define QTAWS_CREATETASKTEMPLATERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateTaskTemplateResponse;

class CreateTaskTemplateResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateTaskTemplateResponsePrivate(CreateTaskTemplateResponse * const q);

    void parseCreateTaskTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTaskTemplateResponse)
    Q_DISABLE_COPY(CreateTaskTemplateResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
