// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSREQUEST_P_H
#define QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelexplainabilityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelExplainabilityJobDefinitionsRequest;

class ListModelExplainabilityJobDefinitionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelExplainabilityJobDefinitionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelExplainabilityJobDefinitionsRequest * const q);
    ListModelExplainabilityJobDefinitionsRequestPrivate(const ListModelExplainabilityJobDefinitionsRequestPrivate &other,
                                   ListModelExplainabilityJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelExplainabilityJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
