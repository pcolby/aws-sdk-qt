// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOIPPOOLUSAGEREQUEST_P_H
#define QTAWS_GETCOIPPOOLUSAGEREQUEST_P_H

#include "ec2request_p.h"
#include "getcoippoolusagerequest.h"

namespace QtAws {
namespace Ec2 {

class GetCoipPoolUsageRequest;

class GetCoipPoolUsageRequestPrivate : public Ec2RequestPrivate {

public:
    GetCoipPoolUsageRequestPrivate(const Ec2Request::Action action,
                                   GetCoipPoolUsageRequest * const q);
    GetCoipPoolUsageRequestPrivate(const GetCoipPoolUsageRequestPrivate &other,
                                   GetCoipPoolUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCoipPoolUsageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
