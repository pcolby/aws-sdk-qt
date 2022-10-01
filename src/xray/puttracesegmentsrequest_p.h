// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTRACESEGMENTSREQUEST_P_H
#define QTAWS_PUTTRACESEGMENTSREQUEST_P_H

#include "xrayrequest_p.h"
#include "puttracesegmentsrequest.h"

namespace QtAws {
namespace XRay {

class PutTraceSegmentsRequest;

class PutTraceSegmentsRequestPrivate : public XRayRequestPrivate {

public:
    PutTraceSegmentsRequestPrivate(const XRayRequest::Action action,
                                   PutTraceSegmentsRequest * const q);
    PutTraceSegmentsRequestPrivate(const PutTraceSegmentsRequestPrivate &other,
                                   PutTraceSegmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutTraceSegmentsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
