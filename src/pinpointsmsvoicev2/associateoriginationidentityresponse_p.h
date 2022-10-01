// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEORIGINATIONIDENTITYRESPONSE_P_H
#define QTAWS_ASSOCIATEORIGINATIONIDENTITYRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class AssociateOriginationIdentityResponse;

class AssociateOriginationIdentityResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit AssociateOriginationIdentityResponsePrivate(AssociateOriginationIdentityResponse * const q);

    void parseAssociateOriginationIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateOriginationIdentityResponse)
    Q_DISABLE_COPY(AssociateOriginationIdentityResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
