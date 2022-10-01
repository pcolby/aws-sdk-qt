// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBFLOWSREQUEST_P_H
#define QTAWS_TERMINATEJOBFLOWSREQUEST_P_H

#include "emrrequest_p.h"
#include "terminatejobflowsrequest.h"

namespace QtAws {
namespace Emr {

class TerminateJobFlowsRequest;

class TerminateJobFlowsRequestPrivate : public EmrRequestPrivate {

public:
    TerminateJobFlowsRequestPrivate(const EmrRequest::Action action,
                                   TerminateJobFlowsRequest * const q);
    TerminateJobFlowsRequestPrivate(const TerminateJobFlowsRequestPrivate &other,
                                   TerminateJobFlowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateJobFlowsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
