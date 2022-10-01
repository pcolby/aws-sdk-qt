// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWMODULESRESPONSE_P_H
#define QTAWS_LISTCONTACTFLOWMODULESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListContactFlowModulesResponse;

class ListContactFlowModulesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListContactFlowModulesResponsePrivate(ListContactFlowModulesResponse * const q);

    void parseListContactFlowModulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactFlowModulesResponse)
    Q_DISABLE_COPY(ListContactFlowModulesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
