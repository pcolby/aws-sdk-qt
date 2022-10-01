// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEWORKFLOWRUNREQUEST_P_H
#define QTAWS_RESUMEWORKFLOWRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "resumeworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class ResumeWorkflowRunRequest;

class ResumeWorkflowRunRequestPrivate : public GlueRequestPrivate {

public:
    ResumeWorkflowRunRequestPrivate(const GlueRequest::Action action,
                                   ResumeWorkflowRunRequest * const q);
    ResumeWorkflowRunRequestPrivate(const ResumeWorkflowRunRequestPrivate &other,
                                   ResumeWorkflowRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
