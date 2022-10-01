// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSRESPONSE_P_H
#define QTAWS_LISTFLOWSRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class ListFlowsResponse;

class ListFlowsResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit ListFlowsResponsePrivate(ListFlowsResponse * const q);

    void parseListFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFlowsResponse)
    Q_DISABLE_COPY(ListFlowsResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
