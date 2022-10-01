// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKEXECUTIONREQUEST_P_H
#define QTAWS_STOPNOTEBOOKEXECUTIONREQUEST_P_H

#include "emrrequest_p.h"
#include "stopnotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class StopNotebookExecutionRequest;

class StopNotebookExecutionRequestPrivate : public EmrRequestPrivate {

public:
    StopNotebookExecutionRequestPrivate(const EmrRequest::Action action,
                                   StopNotebookExecutionRequest * const q);
    StopNotebookExecutionRequestPrivate(const StopNotebookExecutionRequestPrivate &other,
                                   StopNotebookExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
