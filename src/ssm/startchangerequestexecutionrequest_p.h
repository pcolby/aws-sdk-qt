// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_P_H
#define QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "startchangerequestexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StartChangeRequestExecutionRequest;

class StartChangeRequestExecutionRequestPrivate : public SsmRequestPrivate {

public:
    StartChangeRequestExecutionRequestPrivate(const SsmRequest::Action action,
                                   StartChangeRequestExecutionRequest * const q);
    StartChangeRequestExecutionRequestPrivate(const StartChangeRequestExecutionRequestPrivate &other,
                                   StartChangeRequestExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartChangeRequestExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
