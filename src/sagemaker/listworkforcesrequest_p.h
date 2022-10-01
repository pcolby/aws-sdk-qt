// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFORCESREQUEST_P_H
#define QTAWS_LISTWORKFORCESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listworkforcesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListWorkforcesRequest;

class ListWorkforcesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListWorkforcesRequestPrivate(const SageMakerRequest::Action action,
                                   ListWorkforcesRequest * const q);
    ListWorkforcesRequestPrivate(const ListWorkforcesRequestPrivate &other,
                                   ListWorkforcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkforcesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
