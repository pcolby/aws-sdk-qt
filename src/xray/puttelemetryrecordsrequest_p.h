// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTELEMETRYRECORDSREQUEST_P_H
#define QTAWS_PUTTELEMETRYRECORDSREQUEST_P_H

#include "xrayrequest_p.h"
#include "puttelemetryrecordsrequest.h"

namespace QtAws {
namespace XRay {

class PutTelemetryRecordsRequest;

class PutTelemetryRecordsRequestPrivate : public XRayRequestPrivate {

public:
    PutTelemetryRecordsRequestPrivate(const XRayRequest::Action action,
                                   PutTelemetryRecordsRequest * const q);
    PutTelemetryRecordsRequestPrivate(const PutTelemetryRecordsRequestPrivate &other,
                                   PutTelemetryRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutTelemetryRecordsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
