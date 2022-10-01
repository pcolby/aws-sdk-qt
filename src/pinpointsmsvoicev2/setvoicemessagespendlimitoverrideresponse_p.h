// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_P_H
#define QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetVoiceMessageSpendLimitOverrideResponse;

class SetVoiceMessageSpendLimitOverrideResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SetVoiceMessageSpendLimitOverrideResponsePrivate(SetVoiceMessageSpendLimitOverrideResponse * const q);

    void parseSetVoiceMessageSpendLimitOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetVoiceMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(SetVoiceMessageSpendLimitOverrideResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
