// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_P_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_P_H

#include "healthrequest_p.h"
#include "describeaffectedentitiesrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesRequest;

class DescribeAffectedEntitiesRequestPrivate : public HealthRequestPrivate {

public:
    DescribeAffectedEntitiesRequestPrivate(const HealthRequest::Action action,
                                   DescribeAffectedEntitiesRequest * const q);
    DescribeAffectedEntitiesRequestPrivate(const DescribeAffectedEntitiesRequestPrivate &other,
                                   DescribeAffectedEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedEntitiesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
