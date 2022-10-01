// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORORIGINATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTORORIGINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorOriginationRequest;

class GetVoiceConnectorOriginationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorOriginationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorOriginationRequest * const q);
    GetVoiceConnectorOriginationRequestPrivate(const GetVoiceConnectorOriginationRequestPrivate &other,
                                   GetVoiceConnectorOriginationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
