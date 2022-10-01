// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELBIASJOBDEFINITIONSREQUEST_P_H
#define QTAWS_LISTMODELBIASJOBDEFINITIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelbiasjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelBiasJobDefinitionsRequest;

class ListModelBiasJobDefinitionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelBiasJobDefinitionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelBiasJobDefinitionsRequest * const q);
    ListModelBiasJobDefinitionsRequestPrivate(const ListModelBiasJobDefinitionsRequestPrivate &other,
                                   ListModelBiasJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelBiasJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
