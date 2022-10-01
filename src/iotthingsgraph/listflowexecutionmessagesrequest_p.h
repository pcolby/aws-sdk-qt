// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWEXECUTIONMESSAGESREQUEST_P_H
#define QTAWS_LISTFLOWEXECUTIONMESSAGESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "listflowexecutionmessagesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class ListFlowExecutionMessagesRequest;

class ListFlowExecutionMessagesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    ListFlowExecutionMessagesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   ListFlowExecutionMessagesRequest * const q);
    ListFlowExecutionMessagesRequestPrivate(const ListFlowExecutionMessagesRequestPrivate &other,
                                   ListFlowExecutionMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFlowExecutionMessagesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
