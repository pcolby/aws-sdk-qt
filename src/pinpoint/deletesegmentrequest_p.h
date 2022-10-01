// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESEGMENTREQUEST_P_H
#define QTAWS_DELETESEGMENTREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletesegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSegmentRequest;

class DeleteSegmentRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteSegmentRequestPrivate(const PinpointRequest::Action action,
                                   DeleteSegmentRequest * const q);
    DeleteSegmentRequestPrivate(const DeleteSegmentRequestPrivate &other,
                                   DeleteSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
