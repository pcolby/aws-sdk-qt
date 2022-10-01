// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEPATCHGROUPSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describepatchgroupsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupsRequest;

class DescribePatchGroupsRequestPrivate : public SsmRequestPrivate {

public:
    DescribePatchGroupsRequestPrivate(const SsmRequest::Action action,
                                   DescribePatchGroupsRequest * const q);
    DescribePatchGroupsRequestPrivate(const DescribePatchGroupsRequestPrivate &other,
                                   DescribePatchGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePatchGroupsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
