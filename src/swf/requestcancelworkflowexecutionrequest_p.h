// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCANCELWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_REQUESTCANCELWORKFLOWEXECUTIONREQUEST_P_H

#include "swfrequest_p.h"
#include "requestcancelworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class RequestCancelWorkflowExecutionRequest;

class RequestCancelWorkflowExecutionRequestPrivate : public SwfRequestPrivate {

public:
    RequestCancelWorkflowExecutionRequestPrivate(const SwfRequest::Action action,
                                   RequestCancelWorkflowExecutionRequest * const q);
    RequestCancelWorkflowExecutionRequestPrivate(const RequestCancelWorkflowExecutionRequestPrivate &other,
                                   RequestCancelWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestCancelWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
