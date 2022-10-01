// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESEGMENTRESPONSE_P_H
#define QTAWS_UPDATESEGMENTRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSegmentResponse;

class UpdateSegmentResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateSegmentResponsePrivate(UpdateSegmentResponse * const q);

    void parseUpdateSegmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSegmentResponse)
    Q_DISABLE_COPY(UpdateSegmentResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
