// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWREQUEST_P_H
#define QTAWS_CREATEWORKFLOWREQUEST_P_H

#include "gluerequest_p.h"
#include "createworkflowrequest.h"

namespace QtAws {
namespace Glue {

class CreateWorkflowRequest;

class CreateWorkflowRequestPrivate : public GlueRequestPrivate {

public:
    CreateWorkflowRequestPrivate(const GlueRequest::Action action,
                                   CreateWorkflowRequest * const q);
    CreateWorkflowRequestPrivate(const CreateWorkflowRequestPrivate &other,
                                   CreateWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
