// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_P_H

#include "swfrequest_p.h"
#include "terminateworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class TerminateWorkflowExecutionRequest;

class TerminateWorkflowExecutionRequestPrivate : public SwfRequestPrivate {

public:
    TerminateWorkflowExecutionRequestPrivate(const SwfRequest::Action action,
                                   TerminateWorkflowExecutionRequest * const q);
    TerminateWorkflowExecutionRequestPrivate(const TerminateWorkflowExecutionRequestPrivate &other,
                                   TerminateWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
