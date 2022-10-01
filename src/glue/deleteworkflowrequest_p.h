// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFLOWREQUEST_P_H
#define QTAWS_DELETEWORKFLOWREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteworkflowrequest.h"

namespace QtAws {
namespace Glue {

class DeleteWorkflowRequest;

class DeleteWorkflowRequestPrivate : public GlueRequestPrivate {

public:
    DeleteWorkflowRequestPrivate(const GlueRequest::Action action,
                                   DeleteWorkflowRequest * const q);
    DeleteWorkflowRequestPrivate(const DeleteWorkflowRequestPrivate &other,
                                   DeleteWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkflowRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
