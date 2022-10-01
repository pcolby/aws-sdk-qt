// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONREQUEST_P_H
#define QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "skipwaittimeforinstanceterminationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class SkipWaitTimeForInstanceTerminationRequest;

class SkipWaitTimeForInstanceTerminationRequestPrivate : public CodeDeployRequestPrivate {

public:
    SkipWaitTimeForInstanceTerminationRequestPrivate(const CodeDeployRequest::Action action,
                                   SkipWaitTimeForInstanceTerminationRequest * const q);
    SkipWaitTimeForInstanceTerminationRequestPrivate(const SkipWaitTimeForInstanceTerminationRequestPrivate &other,
                                   SkipWaitTimeForInstanceTerminationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SkipWaitTimeForInstanceTerminationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
