// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILEREQUEST_P_H
#define QTAWS_DESCRIBESECURITYPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "describesecurityprofilerequest.h"

namespace QtAws {
namespace Connect {

class DescribeSecurityProfileRequest;

class DescribeSecurityProfileRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeSecurityProfileRequestPrivate(const ConnectRequest::Action action,
                                   DescribeSecurityProfileRequest * const q);
    DescribeSecurityProfileRequestPrivate(const DescribeSecurityProfileRequestPrivate &other,
                                   DescribeSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
