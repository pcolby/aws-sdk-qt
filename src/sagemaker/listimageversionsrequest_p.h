// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEVERSIONSREQUEST_P_H
#define QTAWS_LISTIMAGEVERSIONSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listimageversionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListImageVersionsRequest;

class ListImageVersionsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListImageVersionsRequestPrivate(const SageMakerRequest::Action action,
                                   ListImageVersionsRequest * const q);
    ListImageVersionsRequestPrivate(const ListImageVersionsRequestPrivate &other,
                                   ListImageVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImageVersionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
