// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONRESPONSE_P_H
#define QTAWS_GETSEGMENTVERSIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionResponse;

class GetSegmentVersionResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSegmentVersionResponsePrivate(GetSegmentVersionResponse * const q);

    void parseGetSegmentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentVersionResponse)
    Q_DISABLE_COPY(GetSegmentVersionResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
