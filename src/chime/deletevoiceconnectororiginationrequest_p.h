// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORORIGINATIONREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORORIGINATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorOriginationRequest;

class DeleteVoiceConnectorOriginationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorOriginationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorOriginationRequest * const q);
    DeleteVoiceConnectorOriginationRequestPrivate(const DeleteVoiceConnectorOriginationRequestPrivate &other,
                                   DeleteVoiceConnectorOriginationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorOriginationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
