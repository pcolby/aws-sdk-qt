// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVATIONSREQUEST_P_H
#define QTAWS_DESCRIBEACTIVATIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeactivationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeActivationsRequest;

class DescribeActivationsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeActivationsRequestPrivate(const SsmRequest::Action action,
                                   DescribeActivationsRequest * const q);
    DescribeActivationsRequestPrivate(const DescribeActivationsRequestPrivate &other,
                                   DescribeActivationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActivationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
