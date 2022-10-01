// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWEXECUTIONMESSAGESRESPONSE_P_H
#define QTAWS_LISTFLOWEXECUTIONMESSAGESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class ListFlowExecutionMessagesResponse;

class ListFlowExecutionMessagesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit ListFlowExecutionMessagesResponsePrivate(ListFlowExecutionMessagesResponse * const q);

    void parseListFlowExecutionMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFlowExecutionMessagesResponse)
    Q_DISABLE_COPY(ListFlowExecutionMessagesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
