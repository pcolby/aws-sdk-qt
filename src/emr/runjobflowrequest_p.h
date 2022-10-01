// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNJOBFLOWREQUEST_P_H
#define QTAWS_RUNJOBFLOWREQUEST_P_H

#include "emrrequest_p.h"
#include "runjobflowrequest.h"

namespace QtAws {
namespace Emr {

class RunJobFlowRequest;

class RunJobFlowRequestPrivate : public EmrRequestPrivate {

public:
    RunJobFlowRequestPrivate(const EmrRequest::Action action,
                                   RunJobFlowRequest * const q);
    RunJobFlowRequestPrivate(const RunJobFlowRequestPrivate &other,
                                   RunJobFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunJobFlowRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
