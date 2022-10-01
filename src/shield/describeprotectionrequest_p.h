// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONREQUEST_P_H
#define QTAWS_DESCRIBEPROTECTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeprotectionrequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionRequest;

class DescribeProtectionRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeProtectionRequestPrivate(const ShieldRequest::Action action,
                                   DescribeProtectionRequest * const q);
    DescribeProtectionRequestPrivate(const DescribeProtectionRequestPrivate &other,
                                   DescribeProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
