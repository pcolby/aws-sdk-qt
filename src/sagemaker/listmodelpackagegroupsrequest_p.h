// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGEGROUPSREQUEST_P_H
#define QTAWS_LISTMODELPACKAGEGROUPSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listmodelpackagegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackageGroupsRequest;

class ListModelPackageGroupsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListModelPackageGroupsRequestPrivate(const SageMakerRequest::Action action,
                                   ListModelPackageGroupsRequest * const q);
    ListModelPackageGroupsRequestPrivate(const ListModelPackageGroupsRequestPrivate &other,
                                   ListModelPackageGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListModelPackageGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
