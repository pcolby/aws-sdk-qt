// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationRequest;

class PutVoiceConnectorTerminationRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorTerminationRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorTerminationRequest * const q);
    PutVoiceConnectorTerminationRequestPrivate(const PutVoiceConnectorTerminationRequestPrivate &other,
                                   PutVoiceConnectorTerminationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
