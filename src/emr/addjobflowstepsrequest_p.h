// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDJOBFLOWSTEPSREQUEST_P_H
#define QTAWS_ADDJOBFLOWSTEPSREQUEST_P_H

#include "emrrequest_p.h"
#include "addjobflowstepsrequest.h"

namespace QtAws {
namespace Emr {

class AddJobFlowStepsRequest;

class AddJobFlowStepsRequestPrivate : public EmrRequestPrivate {

public:
    AddJobFlowStepsRequestPrivate(const EmrRequest::Action action,
                                   AddJobFlowStepsRequest * const q);
    AddJobFlowStepsRequestPrivate(const AddJobFlowStepsRequestPrivate &other,
                                   AddJobFlowStepsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddJobFlowStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
