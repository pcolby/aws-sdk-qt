// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKREQUEST_P_H
#define QTAWS_DESCRIBEATTACKREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeattackrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackRequest;

class DescribeAttackRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeAttackRequestPrivate(const ShieldRequest::Action action,
                                   DescribeAttackRequest * const q);
    DescribeAttackRequestPrivate(const DescribeAttackRequestPrivate &other,
                                   DescribeAttackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAttackRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
