// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorRequest;

class DeleteVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorRequest * const q);
    DeleteVoiceConnectorRequestPrivate(const DeleteVoiceConnectorRequestPrivate &other,
                                   DeleteVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
