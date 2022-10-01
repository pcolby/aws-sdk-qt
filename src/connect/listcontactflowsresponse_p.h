// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWSRESPONSE_P_H
#define QTAWS_LISTCONTACTFLOWSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListContactFlowsResponse;

class ListContactFlowsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListContactFlowsResponsePrivate(ListContactFlowsResponse * const q);

    void parseListContactFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactFlowsResponse)
    Q_DISABLE_COPY(ListContactFlowsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
