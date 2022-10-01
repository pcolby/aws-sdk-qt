// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKTEMPLATERESPONSE_P_H
#define QTAWS_UPDATETASKTEMPLATERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateTaskTemplateResponse;

class UpdateTaskTemplateResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateTaskTemplateResponsePrivate(UpdateTaskTemplateResponse * const q);

    void parseUpdateTaskTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTaskTemplateResponse)
    Q_DISABLE_COPY(UpdateTaskTemplateResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
