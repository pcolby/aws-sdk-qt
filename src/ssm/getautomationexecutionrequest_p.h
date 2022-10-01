// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMATIONEXECUTIONREQUEST_P_H
#define QTAWS_GETAUTOMATIONEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "getautomationexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class GetAutomationExecutionRequest;

class GetAutomationExecutionRequestPrivate : public SsmRequestPrivate {

public:
    GetAutomationExecutionRequestPrivate(const SsmRequest::Action action,
                                   GetAutomationExecutionRequest * const q);
    GetAutomationExecutionRequestPrivate(const GetAutomationExecutionRequestPrivate &other,
                                   GetAutomationExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAutomationExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
