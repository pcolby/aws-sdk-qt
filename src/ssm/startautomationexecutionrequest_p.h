// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUTOMATIONEXECUTIONREQUEST_P_H
#define QTAWS_STARTAUTOMATIONEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "startautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StartAutomationExecutionRequest;

class StartAutomationExecutionRequestPrivate : public SsmRequestPrivate {

public:
    StartAutomationExecutionRequestPrivate(const SsmRequest::Action action,
                                   StartAutomationExecutionRequest * const q);
    StartAutomationExecutionRequestPrivate(const StartAutomationExecutionRequestPrivate &other,
                                   StartAutomationExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
