// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_SIGNALWORKFLOWEXECUTIONREQUEST_P_H

#include "swfrequest_p.h"
#include "signalworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class SignalWorkflowExecutionRequest;

class SignalWorkflowExecutionRequestPrivate : public SwfRequestPrivate {

public:
    SignalWorkflowExecutionRequestPrivate(const SwfRequest::Action action,
                                   SignalWorkflowExecutionRequest * const q);
    SignalWorkflowExecutionRequestPrivate(const SignalWorkflowExecutionRequestPrivate &other,
                                   SignalWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SignalWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
