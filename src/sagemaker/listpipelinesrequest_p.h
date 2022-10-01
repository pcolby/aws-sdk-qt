// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESREQUEST_P_H
#define QTAWS_LISTPIPELINESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listpipelinesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelinesRequest;

class ListPipelinesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListPipelinesRequestPrivate(const SageMakerRequest::Action action,
                                   ListPipelinesRequest * const q);
    ListPipelinesRequestPrivate(const ListPipelinesRequestPrivate &other,
                                   ListPipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelinesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
