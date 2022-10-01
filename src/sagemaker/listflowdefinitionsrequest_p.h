// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWDEFINITIONSREQUEST_P_H
#define QTAWS_LISTFLOWDEFINITIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listflowdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFlowDefinitionsRequest;

class ListFlowDefinitionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListFlowDefinitionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListFlowDefinitionsRequest * const q);
    ListFlowDefinitionsRequestPrivate(const ListFlowDefinitionsRequestPrivate &other,
                                   ListFlowDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFlowDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
