// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTLAUNCHREQUEST_P_H
#define QTAWS_ENABLEFASTLAUNCHREQUEST_P_H

#include "ec2request_p.h"
#include "enablefastlaunchrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableFastLaunchRequest;

class EnableFastLaunchRequestPrivate : public Ec2RequestPrivate {

public:
    EnableFastLaunchRequestPrivate(const Ec2Request::Action action,
                                   EnableFastLaunchRequest * const q);
    EnableFastLaunchRequestPrivate(const EnableFastLaunchRequestPrivate &other,
                                   EnableFastLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableFastLaunchRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
