// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSTATEREQUEST_P_H
#define QTAWS_DESCRIBEPATCHGROUPSTATEREQUEST_P_H

#include "ssmrequest_p.h"
#include "describepatchgroupstaterequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupStateRequest;

class DescribePatchGroupStateRequestPrivate : public SsmRequestPrivate {

public:
    DescribePatchGroupStateRequestPrivate(const SsmRequest::Action action,
                                   DescribePatchGroupStateRequest * const q);
    DescribePatchGroupStateRequestPrivate(const DescribePatchGroupStateRequestPrivate &other,
                                   DescribePatchGroupStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePatchGroupStateRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
