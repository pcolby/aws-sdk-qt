// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXREQUEST_P_H
#define QTAWS_DESCRIBEMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "describemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexRequest;

class DescribeMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeMultiplexRequest * const q);
    DescribeMultiplexRequestPrivate(const DescribeMultiplexRequestPrivate &other,
                                   DescribeMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
