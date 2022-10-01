// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONREQUEST_P_H
#define QTAWS_GETSEGMENTVERSIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionRequest;

class GetSegmentVersionRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentVersionRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentVersionRequest * const q);
    GetSegmentVersionRequestPrivate(const GetSegmentVersionRequestPrivate &other,
                                   GetSegmentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentVersionRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
