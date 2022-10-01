// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKFLOWRUNREQUEST_P_H
#define QTAWS_STOPWORKFLOWRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "stopworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class StopWorkflowRunRequest;

class StopWorkflowRunRequestPrivate : public GlueRequestPrivate {

public:
    StopWorkflowRunRequestPrivate(const GlueRequest::Action action,
                                   StopWorkflowRunRequest * const q);
    StopWorkflowRunRequestPrivate(const StopWorkflowRunRequestPrivate &other,
                                   StopWorkflowRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
