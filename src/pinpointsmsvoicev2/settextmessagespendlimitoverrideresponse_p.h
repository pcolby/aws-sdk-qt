// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDERESPONSE_P_H
#define QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetTextMessageSpendLimitOverrideResponse;

class SetTextMessageSpendLimitOverrideResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SetTextMessageSpendLimitOverrideResponsePrivate(SetTextMessageSpendLimitOverrideResponse * const q);

    void parseSetTextMessageSpendLimitOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTextMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(SetTextMessageSpendLimitOverrideResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
