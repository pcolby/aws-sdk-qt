// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTLAUNCHIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEFASTLAUNCHIMAGESREQUEST_P_H

#include "ec2request_p.h"
#include "describefastlaunchimagesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastLaunchImagesRequest;

class DescribeFastLaunchImagesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFastLaunchImagesRequestPrivate(const Ec2Request::Action action,
                                   DescribeFastLaunchImagesRequest * const q);
    DescribeFastLaunchImagesRequestPrivate(const DescribeFastLaunchImagesRequestPrivate &other,
                                   DescribeFastLaunchImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFastLaunchImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
