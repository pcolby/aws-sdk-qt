// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONGROUPREQUEST_P_H
#define QTAWS_DESCRIBEPROTECTIONGROUPREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionGroupRequest;

class DescribeProtectionGroupRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeProtectionGroupRequestPrivate(const ShieldRequest::Action action,
                                   DescribeProtectionGroupRequest * const q);
    DescribeProtectionGroupRequestPrivate(const DescribeProtectionGroupRequestPrivate &other,
                                   DescribeProtectionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
