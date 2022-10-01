// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTEVENTSREQUEST_P_H
#define QTAWS_GETINSIGHTEVENTSREQUEST_P_H

#include "xrayrequest_p.h"
#include "getinsighteventsrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightEventsRequest;

class GetInsightEventsRequestPrivate : public XRayRequestPrivate {

public:
    GetInsightEventsRequestPrivate(const XRayRequest::Action action,
                                   GetInsightEventsRequest * const q);
    GetInsightEventsRequestPrivate(const GetInsightEventsRequestPrivate &other,
                                   GetInsightEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightEventsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
