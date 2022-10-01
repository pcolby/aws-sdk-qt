// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFLOWREQUEST_P_H
#define QTAWS_UPDATEWORKFLOWREQUEST_P_H

#include "gluerequest_p.h"
#include "updateworkflowrequest.h"

namespace QtAws {
namespace Glue {

class UpdateWorkflowRequest;

class UpdateWorkflowRequestPrivate : public GlueRequestPrivate {

public:
    UpdateWorkflowRequestPrivate(const GlueRequest::Action action,
                                   UpdateWorkflowRequest * const q);
    UpdateWorkflowRequestPrivate(const UpdateWorkflowRequestPrivate &other,
                                   UpdateWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
