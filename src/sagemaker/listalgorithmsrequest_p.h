// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALGORITHMSREQUEST_P_H
#define QTAWS_LISTALGORITHMSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listalgorithmsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAlgorithmsRequest;

class ListAlgorithmsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListAlgorithmsRequestPrivate(const SageMakerRequest::Action action,
                                   ListAlgorithmsRequest * const q);
    ListAlgorithmsRequestPrivate(const ListAlgorithmsRequestPrivate &other,
                                   ListAlgorithmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlgorithmsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
