// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREPOSITORIESREQUEST_P_H
#define QTAWS_LISTCODEREPOSITORIESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listcoderepositoriesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCodeRepositoriesRequest;

class ListCodeRepositoriesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListCodeRepositoriesRequestPrivate(const SageMakerRequest::Action action,
                                   ListCodeRepositoriesRequest * const q);
    ListCodeRepositoriesRequestPrivate(const ListCodeRepositoriesRequestPrivate &other,
                                   ListCodeRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCodeRepositoriesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
