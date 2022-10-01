// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKINSTANCESREQUEST_P_H
#define QTAWS_CREATESTACKINSTANCESREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "createstackinstancesrequest.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackInstancesRequest;

class CreateStackInstancesRequestPrivate : public CloudFormationRequestPrivate {

public:
    CreateStackInstancesRequestPrivate(const CloudFormationRequest::Action action,
                                   CreateStackInstancesRequest * const q);
    CreateStackInstancesRequestPrivate(const CreateStackInstancesRequestPrivate &other,
                                   CreateStackInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackInstancesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
