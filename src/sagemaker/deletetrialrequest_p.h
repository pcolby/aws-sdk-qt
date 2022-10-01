// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALREQUEST_P_H
#define QTAWS_DELETETRIALREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletetrialrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialRequest;

class DeleteTrialRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteTrialRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteTrialRequest * const q);
    DeleteTrialRequestPrivate(const DeleteTrialRequestPrivate &other,
                                   DeleteTrialRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
