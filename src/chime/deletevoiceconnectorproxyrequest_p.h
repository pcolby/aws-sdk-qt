// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORPROXYREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORPROXYREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorProxyRequest;

class DeleteVoiceConnectorProxyRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorProxyRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorProxyRequest * const q);
    DeleteVoiceConnectorProxyRequestPrivate(const DeleteVoiceConnectorProxyRequestPrivate &other,
                                   DeleteVoiceConnectorProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
