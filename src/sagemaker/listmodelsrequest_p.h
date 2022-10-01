// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSREQUEST_P_H
#define QTAWS_LISTMODELSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelsRequest;

class ListModelsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelsRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelsRequest * const q);
    ListModelsRequestPrivate(const ListModelsRequestPrivate &other,
                                   ListModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
