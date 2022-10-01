// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREMEDIATIONEXECUTIONREQUEST_P_H
#define QTAWS_STARTREMEDIATIONEXECUTIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "startremediationexecutionrequest.h"

namespace QtAws {
namespace ConfigService {

class StartRemediationExecutionRequest;

class StartRemediationExecutionRequestPrivate : public ConfigServiceRequestPrivate {

public:
    StartRemediationExecutionRequestPrivate(const ConfigServiceRequest::Action action,
                                   StartRemediationExecutionRequest * const q);
    StartRemediationExecutionRequestPrivate(const StartRemediationExecutionRequestPrivate &other,
                                   StartRemediationExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRemediationExecutionRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
