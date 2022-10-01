// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_STARTWORKFLOWEXECUTIONREQUEST_P_H

#include "swfrequest_p.h"
#include "startworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class StartWorkflowExecutionRequest;

class StartWorkflowExecutionRequestPrivate : public SwfRequestPrivate {

public:
    StartWorkflowExecutionRequestPrivate(const SwfRequest::Action action,
                                   StartWorkflowExecutionRequest * const q);
    StartWorkflowExecutionRequestPrivate(const StartWorkflowExecutionRequestPrivate &other,
                                   StartWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
