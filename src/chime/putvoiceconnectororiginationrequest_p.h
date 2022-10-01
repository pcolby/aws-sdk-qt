// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORORIGINATIONREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORORIGINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorOriginationRequest;

class PutVoiceConnectorOriginationRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorOriginationRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorOriginationRequest * const q);
    PutVoiceConnectorOriginationRequestPrivate(const PutVoiceConnectorOriginationRequestPrivate &other,
                                   PutVoiceConnectorOriginationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
