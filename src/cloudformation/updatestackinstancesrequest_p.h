// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKINSTANCESREQUEST_P_H
#define QTAWS_UPDATESTACKINSTANCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "updatestackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackInstancesRequest;

class UpdateStackInstancesRequestPrivate : public CloudFormationRequestPrivate {

public:
    UpdateStackInstancesRequestPrivate(const CloudFormationRequest::Action action,
                                   UpdateStackInstancesRequest * const q);
    UpdateStackInstancesRequestPrivate(const UpdateStackInstancesRequestPrivate &other,
                                   UpdateStackInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
