// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOOLRESPONSE_P_H
#define QTAWS_UPDATEPOOLRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePoolResponse;

class UpdatePoolResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit UpdatePoolResponsePrivate(UpdatePoolResponse * const q);

    void parseUpdatePoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePoolResponse)
    Q_DISABLE_COPY(UpdatePoolResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
