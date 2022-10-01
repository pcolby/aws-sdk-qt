// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKEXECUTIONREQUEST_P_H
#define QTAWS_STARTNOTEBOOKEXECUTIONREQUEST_P_H

#include "emrrequest_p.h"
#include "startnotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class StartNotebookExecutionRequest;

class StartNotebookExecutionRequestPrivate : public EmrRequestPrivate {

public:
    StartNotebookExecutionRequestPrivate(const EmrRequest::Action action,
                                   StartNotebookExecutionRequest * const q);
    StartNotebookExecutionRequestPrivate(const StartNotebookExecutionRequestPrivate &other,
                                   StartNotebookExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
