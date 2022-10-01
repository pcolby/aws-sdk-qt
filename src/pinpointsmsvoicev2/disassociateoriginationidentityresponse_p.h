// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEORIGINATIONIDENTITYRESPONSE_P_H
#define QTAWS_DISASSOCIATEORIGINATIONIDENTITYRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DisassociateOriginationIdentityResponse;

class DisassociateOriginationIdentityResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DisassociateOriginationIdentityResponsePrivate(DisassociateOriginationIdentityResponse * const q);

    void parseDisassociateOriginationIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateOriginationIdentityResponse)
    Q_DISABLE_COPY(DisassociateOriginationIdentityResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
