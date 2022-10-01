// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWREQUEST_P_H
#define QTAWS_GETWORKFLOWREQUEST_P_H

#include "gluerequest_p.h"
#include "getworkflowrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRequest;

class GetWorkflowRequestPrivate : public GlueRequestPrivate {

public:
    GetWorkflowRequestPrivate(const GlueRequest::Action action,
                                   GetWorkflowRequest * const q);
    GetWorkflowRequestPrivate(const GetWorkflowRequestPrivate &other,
                                   GetWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
