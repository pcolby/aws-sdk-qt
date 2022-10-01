// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorterminationcredentialsrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationCredentialsRequest;

class DeleteVoiceConnectorTerminationCredentialsRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorTerminationCredentialsRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorTerminationCredentialsRequest * const q);
    DeleteVoiceConnectorTerminationCredentialsRequestPrivate(const DeleteVoiceConnectorTerminationCredentialsRequestPrivate &other,
                                   DeleteVoiceConnectorTerminationCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
