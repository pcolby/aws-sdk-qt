// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALCOMPONENTREQUEST_P_H
#define QTAWS_DELETETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialComponentRequest;

class DeleteTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteTrialComponentRequest * const q);
    DeleteTrialComponentRequestPrivate(const DeleteTrialComponentRequestPrivate &other,
                                   DeleteTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
