// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWMODULERESPONSE_P_H
#define QTAWS_CREATECONTACTFLOWMODULERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowModuleResponse;

class CreateContactFlowModuleResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateContactFlowModuleResponsePrivate(CreateContactFlowModuleResponse * const q);

    void parseCreateContactFlowModuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactFlowModuleResponse)
    Q_DISABLE_COPY(CreateContactFlowModuleResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
