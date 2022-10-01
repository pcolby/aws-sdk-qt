// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSREQUEST_P_H
#define QTAWS_LISTEXPERIMENTSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listexperimentsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListExperimentsRequest;

class ListExperimentsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListExperimentsRequestPrivate(const SageMakerRequest::Action action,
                                   ListExperimentsRequest * const q);
    ListExperimentsRequestPrivate(const ListExperimentsRequestPrivate &other,
                                   ListExperimentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExperimentsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
