// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATERECOVERYINSTANCESREQUEST_P_H
#define QTAWS_TERMINATERECOVERYINSTANCESREQUEST_P_H

#include "drsrequest_p.h"
#include "terminaterecoveryinstancesrequest.h"

namespace QtAws {
namespace Drs {

class TerminateRecoveryInstancesRequest;

class TerminateRecoveryInstancesRequestPrivate : public DrsRequestPrivate {

public:
    TerminateRecoveryInstancesRequestPrivate(const DrsRequest::Action action,
                                   TerminateRecoveryInstancesRequest * const q);
    TerminateRecoveryInstancesRequestPrivate(const TerminateRecoveryInstancesRequestPrivate &other,
                                   TerminateRecoveryInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateRecoveryInstancesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
