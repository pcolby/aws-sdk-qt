// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorterminationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationRequest;

class DeleteVoiceConnectorTerminationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorTerminationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorTerminationRequest * const q);
    DeleteVoiceConnectorTerminationRequestPrivate(const DeleteVoiceConnectorTerminationRequestPrivate &other,
                                   DeleteVoiceConnectorTerminationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorTerminationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
