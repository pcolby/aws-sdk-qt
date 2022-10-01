// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALREQUEST_P_H
#define QTAWS_UPDATETRIALREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatetrialrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialRequest;

class UpdateTrialRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateTrialRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateTrialRequest * const q);
    UpdateTrialRequestPrivate(const UpdateTrialRequestPrivate &other,
                                   UpdateTrialRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
