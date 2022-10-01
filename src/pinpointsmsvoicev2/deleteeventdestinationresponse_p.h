// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_DELETEEVENTDESTINATIONRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteEventDestinationResponse;

class DeleteEventDestinationResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteEventDestinationResponsePrivate(DeleteEventDestinationResponse * const q);

    void parseDeleteEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventDestinationResponse)
    Q_DISABLE_COPY(DeleteEventDestinationResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
