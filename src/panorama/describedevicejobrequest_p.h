// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEJOBREQUEST_P_H
#define QTAWS_DESCRIBEDEVICEJOBREQUEST_P_H

#include "panoramarequest_p.h"
#include "describedevicejobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeDeviceJobRequest;

class DescribeDeviceJobRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribeDeviceJobRequestPrivate(const PanoramaRequest::Action action,
                                   DescribeDeviceJobRequest * const q);
    DescribeDeviceJobRequestPrivate(const DescribeDeviceJobRequestPrivate &other,
                                   DescribeDeviceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
