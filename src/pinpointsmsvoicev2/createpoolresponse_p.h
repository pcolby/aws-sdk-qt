// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOOLRESPONSE_P_H
#define QTAWS_CREATEPOOLRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreatePoolResponse;

class CreatePoolResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit CreatePoolResponsePrivate(CreatePoolResponse * const q);

    void parseCreatePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePoolResponse)
    Q_DISABLE_COPY(CreatePoolResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
