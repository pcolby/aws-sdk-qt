// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationCredentialsRequest;

class PutVoiceConnectorTerminationCredentialsRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorTerminationCredentialsRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorTerminationCredentialsRequest * const q);
    PutVoiceConnectorTerminationCredentialsRequestPrivate(const PutVoiceConnectorTerminationCredentialsRequestPrivate &other,
                                   PutVoiceConnectorTerminationCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
