// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESREQUEST_P_H
#define QTAWS_DESCRIBESERVICESREQUEST_P_H

#include "ecsrequest_p.h"
#include "describeservicesrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeServicesRequest;

class DescribeServicesRequestPrivate : public EcsRequestPrivate {

public:
    DescribeServicesRequestPrivate(const EcsRequest::Action action,
                                   DescribeServicesRequest * const q);
    DescribeServicesRequestPrivate(const DescribeServicesRequestPrivate &other,
                                   DescribeServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServicesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
