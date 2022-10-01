// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILEREQUEST_P_H
#define QTAWS_DESCRIBESECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "describesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DescribeSecurityProfileRequest;

class DescribeSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    DescribeSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   DescribeSecurityProfileRequest * const q);
    DescribeSecurityProfileRequestPrivate(const DescribeSecurityProfileRequestPrivate &other,
                                   DescribeSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
