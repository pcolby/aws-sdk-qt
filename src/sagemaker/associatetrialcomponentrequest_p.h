// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRIALCOMPONENTREQUEST_P_H
#define QTAWS_ASSOCIATETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "associatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class AssociateTrialComponentRequest;

class AssociateTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    AssociateTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   AssociateTrialComponentRequest * const q);
    AssociateTrialComponentRequestPrivate(const AssociateTrialComponentRequestPrivate &other,
                                   AssociateTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
