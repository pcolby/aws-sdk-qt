// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWRUNREQUEST_P_H
#define QTAWS_STARTWORKFLOWRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class StartWorkflowRunRequest;

class StartWorkflowRunRequestPrivate : public GlueRequestPrivate {

public:
    StartWorkflowRunRequestPrivate(const GlueRequest::Action action,
                                   StartWorkflowRunRequest * const q);
    StartWorkflowRunRequestPrivate(const StartWorkflowRunRequestPrivate &other,
                                   StartWorkflowRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
