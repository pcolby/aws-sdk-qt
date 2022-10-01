// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWEXECUTIONMESSAGESRESPONSE_H
#define QTAWS_LISTFLOWEXECUTIONMESSAGESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "listflowexecutionmessagesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class ListFlowExecutionMessagesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT ListFlowExecutionMessagesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    ListFlowExecutionMessagesResponse(const ListFlowExecutionMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFlowExecutionMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowExecutionMessagesResponse)
    Q_DISABLE_COPY(ListFlowExecutionMessagesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
