// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESEGMENTREQUEST_P_H
#define QTAWS_UPDATESEGMENTREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatesegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSegmentRequest;

class UpdateSegmentRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateSegmentRequestPrivate(const PinpointRequest::Action action,
                                   UpdateSegmentRequest * const q);
    UpdateSegmentRequestPrivate(const UpdateSegmentRequestPrivate &other,
                                   UpdateSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
