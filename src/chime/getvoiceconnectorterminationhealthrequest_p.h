// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONHEALTHREQUEST_P_H
#define QTAWS_GETVOICECONNECTORTERMINATIONHEALTHREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorterminationhealthrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationHealthRequest;

class GetVoiceConnectorTerminationHealthRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorTerminationHealthRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorTerminationHealthRequest * const q);
    GetVoiceConnectorTerminationHealthRequestPrivate(const GetVoiceConnectorTerminationHealthRequestPrivate &other,
                                   GetVoiceConnectorTerminationHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorTerminationHealthRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
