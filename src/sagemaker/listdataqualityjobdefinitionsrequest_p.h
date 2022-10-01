// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAQUALITYJOBDEFINITIONSREQUEST_P_H
#define QTAWS_LISTDATAQUALITYJOBDEFINITIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listdataqualityjobdefinitionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDataQualityJobDefinitionsRequest;

class ListDataQualityJobDefinitionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListDataQualityJobDefinitionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListDataQualityJobDefinitionsRequest * const q);
    ListDataQualityJobDefinitionsRequestPrivate(const ListDataQualityJobDefinitionsRequestPrivate &other,
                                   ListDataQualityJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataQualityJobDefinitionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
