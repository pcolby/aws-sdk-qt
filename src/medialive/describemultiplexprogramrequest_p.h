// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXPROGRAMREQUEST_P_H
#define QTAWS_DESCRIBEMULTIPLEXPROGRAMREQUEST_P_H

#include "medialiverequest_p.h"
#include "describemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexProgramRequest;

class DescribeMultiplexProgramRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeMultiplexProgramRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeMultiplexProgramRequest * const q);
    DescribeMultiplexProgramRequestPrivate(const DescribeMultiplexProgramRequestPrivate &other,
                                   DescribeMultiplexProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
