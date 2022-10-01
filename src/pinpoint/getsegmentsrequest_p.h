// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTSREQUEST_P_H
#define QTAWS_GETSEGMENTSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentsRequest;

class GetSegmentsRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentsRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentsRequest * const q);
    GetSegmentsRequestPrivate(const GetSegmentsRequestPrivate &other,
                                   GetSegmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
