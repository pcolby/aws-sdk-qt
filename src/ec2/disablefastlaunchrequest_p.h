// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTLAUNCHREQUEST_P_H
#define QTAWS_DISABLEFASTLAUNCHREQUEST_P_H

#include "ec2request_p.h"
#include "disablefastlaunchrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableFastLaunchRequest;

class DisableFastLaunchRequestPrivate : public Ec2RequestPrivate {

public:
    DisableFastLaunchRequestPrivate(const Ec2Request::Action action,
                                   DisableFastLaunchRequest * const q);
    DisableFastLaunchRequestPrivate(const DisableFastLaunchRequestPrivate &other,
                                   DisableFastLaunchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableFastLaunchRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
