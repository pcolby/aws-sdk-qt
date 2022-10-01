// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTEXTSREQUEST_P_H
#define QTAWS_LISTCONTEXTSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listcontextsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListContextsRequest;

class ListContextsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListContextsRequestPrivate(const SageMakerRequest::Action action,
                                   ListContextsRequest * const q);
    ListContextsRequestPrivate(const ListContextsRequestPrivate &other,
                                   ListContextsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContextsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
