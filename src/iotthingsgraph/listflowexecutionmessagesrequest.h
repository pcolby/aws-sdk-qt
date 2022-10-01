// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWEXECUTIONMESSAGESREQUEST_H
#define QTAWS_LISTFLOWEXECUTIONMESSAGESREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class ListFlowExecutionMessagesRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT ListFlowExecutionMessagesRequest : public IoTThingsGraphRequest {

public:
    ListFlowExecutionMessagesRequest(const ListFlowExecutionMessagesRequest &other);
    ListFlowExecutionMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowExecutionMessagesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
