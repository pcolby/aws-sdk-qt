// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDWORKTEAMSREQUEST_P_H
#define QTAWS_LISTSUBSCRIBEDWORKTEAMSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listsubscribedworkteamsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListSubscribedWorkteamsRequest;

class ListSubscribedWorkteamsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListSubscribedWorkteamsRequestPrivate(const SageMakerRequest::Action action,
                                   ListSubscribedWorkteamsRequest * const q);
    ListSubscribedWorkteamsRequestPrivate(const ListSubscribedWorkteamsRequestPrivate &other,
                                   ListSubscribedWorkteamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscribedWorkteamsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
