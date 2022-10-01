// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLINEAGEGROUPSREQUEST_P_H
#define QTAWS_LISTLINEAGEGROUPSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listlineagegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLineageGroupsRequest;

class ListLineageGroupsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListLineageGroupsRequestPrivate(const SageMakerRequest::Action action,
                                   ListLineageGroupsRequest * const q);
    ListLineageGroupsRequestPrivate(const ListLineageGroupsRequestPrivate &other,
                                   ListLineageGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLineageGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
