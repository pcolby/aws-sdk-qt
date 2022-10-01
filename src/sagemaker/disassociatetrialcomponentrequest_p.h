// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRIALCOMPONENTREQUEST_P_H
#define QTAWS_DISASSOCIATETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "disassociatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DisassociateTrialComponentRequest;

class DisassociateTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    DisassociateTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   DisassociateTrialComponentRequest * const q);
    DisassociateTrialComponentRequestPrivate(const DisassociateTrialComponentRequestPrivate &other,
                                   DisassociateTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
