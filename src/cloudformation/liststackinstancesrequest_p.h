// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKINSTANCESREQUEST_P_H
#define QTAWS_LISTSTACKINSTANCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackInstancesRequest;

class ListStackInstancesRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStackInstancesRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStackInstancesRequest * const q);
    ListStackInstancesRequestPrivate(const ListStackInstancesRequestPrivate &other,
                                   ListStackInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
