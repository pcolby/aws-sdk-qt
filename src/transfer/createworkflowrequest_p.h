// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWREQUEST_P_H
#define QTAWS_CREATEWORKFLOWREQUEST_P_H

#include "transferrequest_p.h"
#include "createworkflowrequest.h"

namespace QtAws {
namespace Transfer {

class CreateWorkflowRequest;

class CreateWorkflowRequestPrivate : public TransferRequestPrivate {

public:
    CreateWorkflowRequestPrivate(const TransferRequest::Action action,
                                   CreateWorkflowRequest * const q);
    CreateWorkflowRequestPrivate(const CreateWorkflowRequestPrivate &other,
                                   CreateWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkflowRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
