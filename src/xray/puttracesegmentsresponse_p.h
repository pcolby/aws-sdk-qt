// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTRACESEGMENTSRESPONSE_P_H
#define QTAWS_PUTTRACESEGMENTSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class PutTraceSegmentsResponse;

class PutTraceSegmentsResponsePrivate : public XRayResponsePrivate {

public:

    explicit PutTraceSegmentsResponsePrivate(PutTraceSegmentsResponse * const q);

    void parsePutTraceSegmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutTraceSegmentsResponse)
    Q_DISABLE_COPY(PutTraceSegmentsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
