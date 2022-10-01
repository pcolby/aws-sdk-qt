// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDERESPONSE_P_H
#define QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteTextMessageSpendLimitOverrideResponse;

class DeleteTextMessageSpendLimitOverrideResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteTextMessageSpendLimitOverrideResponsePrivate(DeleteTextMessageSpendLimitOverrideResponse * const q);

    void parseDeleteTextMessageSpendLimitOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTextMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(DeleteTextMessageSpendLimitOverrideResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
