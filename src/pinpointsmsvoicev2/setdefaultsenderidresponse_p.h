// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTSENDERIDRESPONSE_P_H
#define QTAWS_SETDEFAULTSENDERIDRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultSenderIdResponse;

class SetDefaultSenderIdResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SetDefaultSenderIdResponsePrivate(SetDefaultSenderIdResponse * const q);

    void parseSetDefaultSenderIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDefaultSenderIdResponse)
    Q_DISABLE_COPY(SetDefaultSenderIdResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
