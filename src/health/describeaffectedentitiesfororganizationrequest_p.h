// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONREQUEST_P_H

#include "healthrequest_p.h"
#include "describeaffectedentitiesfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesForOrganizationRequest;

class DescribeAffectedEntitiesForOrganizationRequestPrivate : public HealthRequestPrivate {

public:
    DescribeAffectedEntitiesForOrganizationRequestPrivate(const HealthRequest::Action action,
                                   DescribeAffectedEntitiesForOrganizationRequest * const q);
    DescribeAffectedEntitiesForOrganizationRequestPrivate(const DescribeAffectedEntitiesForOrganizationRequestPrivate &other,
                                   DescribeAffectedEntitiesForOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedEntitiesForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
