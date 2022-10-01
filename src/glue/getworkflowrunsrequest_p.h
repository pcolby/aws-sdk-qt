// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNSREQUEST_P_H
#define QTAWS_GETWORKFLOWRUNSREQUEST_P_H

#include "gluerequest_p.h"
#include "getworkflowrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunsRequest;

class GetWorkflowRunsRequestPrivate : public GlueRequestPrivate {

public:
    GetWorkflowRunsRequestPrivate(const GlueRequest::Action action,
                                   GetWorkflowRunsRequest * const q);
    GetWorkflowRunsRequestPrivate(const GetWorkflowRunsRequestPrivate &other,
                                   GetWorkflowRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
