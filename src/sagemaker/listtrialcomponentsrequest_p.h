// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALCOMPONENTSREQUEST_P_H
#define QTAWS_LISTTRIALCOMPONENTSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listtrialcomponentsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrialComponentsRequest;

class ListTrialComponentsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListTrialComponentsRequestPrivate(const SageMakerRequest::Action action,
                                   ListTrialComponentsRequest * const q);
    ListTrialComponentsRequestPrivate(const ListTrialComponentsRequestPrivate &other,
                                   ListTrialComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrialComponentsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
