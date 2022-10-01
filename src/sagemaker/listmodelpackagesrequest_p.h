// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGESREQUEST_P_H
#define QTAWS_LISTMODELPACKAGESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelpackagesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackagesRequest;

class ListModelPackagesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelPackagesRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelPackagesRequest * const q);
    ListModelPackagesRequestPrivate(const ListModelPackagesRequestPrivate &other,
                                   ListModelPackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelPackagesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
