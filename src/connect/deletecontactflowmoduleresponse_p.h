// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWMODULERESPONSE_P_H
#define QTAWS_DELETECONTACTFLOWMODULERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowModuleResponse;

class DeleteContactFlowModuleResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteContactFlowModuleResponsePrivate(DeleteContactFlowModuleResponse * const q);

    void parseDeleteContactFlowModuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactFlowModuleResponse)
    Q_DISABLE_COPY(DeleteContactFlowModuleResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
