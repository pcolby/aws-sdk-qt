// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWEXECUTIONHISTORYREQUEST_P_H
#define QTAWS_GETWORKFLOWEXECUTIONHISTORYREQUEST_P_H

#include "swfrequest_p.h"
#include "getworkflowexecutionhistoryrequest.h"

namespace QtAws {
namespace Swf {

class GetWorkflowExecutionHistoryRequest;

class GetWorkflowExecutionHistoryRequestPrivate : public SwfRequestPrivate {

public:
    GetWorkflowExecutionHistoryRequestPrivate(const SwfRequest::Action action,
                                   GetWorkflowExecutionHistoryRequest * const q);
    GetWorkflowExecutionHistoryRequestPrivate(const GetWorkflowExecutionHistoryRequestPrivate &other,
                                   GetWorkflowExecutionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowExecutionHistoryRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
