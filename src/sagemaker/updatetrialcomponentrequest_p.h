// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALCOMPONENTREQUEST_P_H
#define QTAWS_UPDATETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialComponentRequest;

class UpdateTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateTrialComponentRequest * const q);
    UpdateTrialComponentRequestPrivate(const UpdateTrialComponentRequestPrivate &other,
                                   UpdateTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
