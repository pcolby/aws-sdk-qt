// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICETHUMBNAILREQUEST_P_H
#define QTAWS_DESCRIBEINPUTDEVICETHUMBNAILREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeinputdevicethumbnailrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceThumbnailRequest;

class DescribeInputDeviceThumbnailRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeInputDeviceThumbnailRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeInputDeviceThumbnailRequest * const q);
    DescribeInputDeviceThumbnailRequestPrivate(const DescribeInputDeviceThumbnailRequestPrivate &other,
                                   DescribeInputDeviceThumbnailRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInputDeviceThumbnailRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
