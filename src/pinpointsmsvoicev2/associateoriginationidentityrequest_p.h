// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEORIGINATIONIDENTITYREQUEST_P_H
#define QTAWS_ASSOCIATEORIGINATIONIDENTITYREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "associateoriginationidentityrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class AssociateOriginationIdentityRequest;

class AssociateOriginationIdentityRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    AssociateOriginationIdentityRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   AssociateOriginationIdentityRequest * const q);
    AssociateOriginationIdentityRequestPrivate(const AssociateOriginationIdentityRequestPrivate &other,
                                   AssociateOriginationIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateOriginationIdentityRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
