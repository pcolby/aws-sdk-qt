// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELQUALITYJOBDEFINITIONSREQUEST_P_H
#define QTAWS_LISTMODELQUALITYJOBDEFINITIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelqualityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelQualityJobDefinitionsRequest;

class ListModelQualityJobDefinitionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelQualityJobDefinitionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelQualityJobDefinitionsRequest * const q);
    ListModelQualityJobDefinitionsRequestPrivate(const ListModelQualityJobDefinitionsRequestPrivate &other,
                                   ListModelQualityJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelQualityJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
