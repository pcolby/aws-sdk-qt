// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATUREGROUPSREQUEST_P_H
#define QTAWS_LISTFEATUREGROUPSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listfeaturegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFeatureGroupsRequest;

class ListFeatureGroupsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListFeatureGroupsRequestPrivate(const SageMakerRequest::Action action,
                                   ListFeatureGroupsRequest * const q);
    ListFeatureGroupsRequestPrivate(const ListFeatureGroupsRequestPrivate &other,
                                   ListFeatureGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFeatureGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
