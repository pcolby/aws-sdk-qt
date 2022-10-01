// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMATIONEXECUTIONREQUEST_P_H
#define QTAWS_STOPAUTOMATIONEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "stopautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StopAutomationExecutionRequest;

class StopAutomationExecutionRequestPrivate : public SsmRequestPrivate {

public:
    StopAutomationExecutionRequestPrivate(const SsmRequest::Action action,
                                   StopAutomationExecutionRequest * const q);
    StopAutomationExecutionRequestPrivate(const StopAutomationExecutionRequestPrivate &other,
                                   StopAutomationExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
