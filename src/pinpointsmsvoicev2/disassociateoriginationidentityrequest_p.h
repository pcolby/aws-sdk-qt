// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEORIGINATIONIDENTITYREQUEST_P_H
#define QTAWS_DISASSOCIATEORIGINATIONIDENTITYREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "disassociateoriginationidentityrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DisassociateOriginationIdentityRequest;

class DisassociateOriginationIdentityRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DisassociateOriginationIdentityRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DisassociateOriginationIdentityRequest * const q);
    DisassociateOriginationIdentityRequestPrivate(const DisassociateOriginationIdentityRequestPrivate &other,
                                   DisassociateOriginationIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateOriginationIdentityRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
