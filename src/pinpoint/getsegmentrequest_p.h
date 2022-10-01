// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTREQUEST_P_H
#define QTAWS_GETSEGMENTREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentRequest;

class GetSegmentRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentRequest * const q);
    GetSegmentRequestPrivate(const GetSegmentRequestPrivate &other,
                                   GetSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
