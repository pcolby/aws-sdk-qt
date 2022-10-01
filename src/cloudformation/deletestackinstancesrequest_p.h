// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKINSTANCESREQUEST_P_H
#define QTAWS_DELETESTACKINSTANCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "deletestackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackInstancesRequest;

class DeleteStackInstancesRequestPrivate : public CloudFormationRequestPrivate {

public:
    DeleteStackInstancesRequestPrivate(const CloudFormationRequest::Action action,
                                   DeleteStackInstancesRequest * const q);
    DeleteStackInstancesRequestPrivate(const DeleteStackInstancesRequestPrivate &other,
                                   DeleteStackInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
