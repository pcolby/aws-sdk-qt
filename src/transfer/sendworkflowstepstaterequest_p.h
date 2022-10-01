// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDWORKFLOWSTEPSTATEREQUEST_P_H
#define QTAWS_SENDWORKFLOWSTEPSTATEREQUEST_P_H

#include "transferrequest_p.h"
#include "sendworkflowstepstaterequest.h"

namespace QtAws {
namespace Transfer {

class SendWorkflowStepStateRequest;

class SendWorkflowStepStateRequestPrivate : public TransferRequestPrivate {

public:
    SendWorkflowStepStateRequestPrivate(const TransferRequest::Action action,
                                   SendWorkflowStepStateRequest * const q);
    SendWorkflowStepStateRequestPrivate(const SendWorkflowStepStateRequestPrivate &other,
                                   SendWorkflowStepStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendWorkflowStepStateRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
