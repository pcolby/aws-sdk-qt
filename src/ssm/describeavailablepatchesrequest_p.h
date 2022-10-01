// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABLEPATCHESREQUEST_P_H
#define QTAWS_DESCRIBEAVAILABLEPATCHESREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeavailablepatchesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAvailablePatchesRequest;

class DescribeAvailablePatchesRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAvailablePatchesRequestPrivate(const SsmRequest::Action action,
                                   DescribeAvailablePatchesRequest * const q);
    DescribeAvailablePatchesRequestPrivate(const DescribeAvailablePatchesRequestPrivate &other,
                                   DescribeAvailablePatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAvailablePatchesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
