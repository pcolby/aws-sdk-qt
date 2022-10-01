// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNREQUEST_P_H
#define QTAWS_GETWORKFLOWRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "getworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunRequest;

class GetWorkflowRunRequestPrivate : public GlueRequestPrivate {

public:
    GetWorkflowRunRequestPrivate(const GlueRequest::Action action,
                                   GetWorkflowRunRequest * const q);
    GetWorkflowRunRequestPrivate(const GetWorkflowRunRequestPrivate &other,
                                   GetWorkflowRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
