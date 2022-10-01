// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_P_H
#define QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteVoiceMessageSpendLimitOverrideResponse;

class DeleteVoiceMessageSpendLimitOverrideResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteVoiceMessageSpendLimitOverrideResponsePrivate(DeleteVoiceMessageSpendLimitOverrideResponse * const q);

    void parseDeleteVoiceMessageSpendLimitOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceMessageSpendLimitOverrideResponse)
    Q_DISABLE_COPY(DeleteVoiceMessageSpendLimitOverrideResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
