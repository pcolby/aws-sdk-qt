// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTSRESPONSE_P_H
#define QTAWS_GETSEGMENTSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentsResponse;

class GetSegmentsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentsResponsePrivate(GetSegmentsResponse * const q);

    void parseGetSegmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentsResponse)
    Q_DISABLE_COPY(GetSegmentsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
