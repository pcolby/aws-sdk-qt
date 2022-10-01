// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTREQUEST_P_H
#define QTAWS_DESCRIBECOMPONENTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "describecomponentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DescribeComponentRequest;

class DescribeComponentRequestPrivate : public GreengrassV2RequestPrivate {

public:
    DescribeComponentRequestPrivate(const GreengrassV2Request::Action action,
                                   DescribeComponentRequest * const q);
    DescribeComponentRequestPrivate(const DescribeComponentRequestPrivate &other,
                                   DescribeComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
