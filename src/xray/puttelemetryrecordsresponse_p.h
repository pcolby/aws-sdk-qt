// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTELEMETRYRECORDSRESPONSE_P_H
#define QTAWS_PUTTELEMETRYRECORDSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class PutTelemetryRecordsResponse;

class PutTelemetryRecordsResponsePrivate : public XRayResponsePrivate {

public:

    explicit PutTelemetryRecordsResponsePrivate(PutTelemetryRecordsResponse * const q);

    void parsePutTelemetryRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutTelemetryRecordsResponse)
    Q_DISABLE_COPY(PutTelemetryRecordsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
