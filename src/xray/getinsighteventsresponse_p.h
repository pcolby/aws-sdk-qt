// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTEVENTSRESPONSE_P_H
#define QTAWS_GETINSIGHTEVENTSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetInsightEventsResponse;

class GetInsightEventsResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetInsightEventsResponsePrivate(GetInsightEventsResponse * const q);

    void parseGetInsightEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightEventsResponse)
    Q_DISABLE_COPY(GetInsightEventsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
