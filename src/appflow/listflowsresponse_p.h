// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSRESPONSE_P_H
#define QTAWS_LISTFLOWSRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class ListFlowsResponse;

class ListFlowsResponsePrivate : public AppflowResponsePrivate {

public:

    explicit ListFlowsResponsePrivate(ListFlowsResponse * const q);

    void parseListFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFlowsResponse)
    Q_DISABLE_COPY(ListFlowsResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
