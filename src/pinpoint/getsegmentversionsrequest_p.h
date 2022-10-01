// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONSREQUEST_P_H
#define QTAWS_GETSEGMENTVERSIONSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentversionsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionsRequest;

class GetSegmentVersionsRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentVersionsRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentVersionsRequest * const q);
    GetSegmentVersionsRequestPrivate(const GetSegmentVersionsRequestPrivate &other,
                                   GetSegmentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
