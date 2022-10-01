// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICEREQUEST_P_H
#define QTAWS_DESCRIBEINPUTDEVICEREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeinputdevicerequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceRequest;

class DescribeInputDeviceRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeInputDeviceRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeInputDeviceRequest * const q);
    DescribeInputDeviceRequestPrivate(const DescribeInputDeviceRequestPrivate &other,
                                   DescribeInputDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInputDeviceRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
