// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTORTERMINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationRequest;

class GetVoiceConnectorTerminationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorTerminationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorTerminationRequest * const q);
    GetVoiceConnectorTerminationRequestPrivate(const GetVoiceConnectorTerminationRequestPrivate &other,
                                   GetVoiceConnectorTerminationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
