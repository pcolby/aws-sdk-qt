// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKTEAMSREQUEST_P_H
#define QTAWS_LISTWORKTEAMSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listworkteamsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListWorkteamsRequest;

class ListWorkteamsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListWorkteamsRequestPrivate(const SageMakerRequest::Action action,
                                   ListWorkteamsRequest * const q);
    ListWorkteamsRequestPrivate(const ListWorkteamsRequestPrivate &other,
                                   ListWorkteamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkteamsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
