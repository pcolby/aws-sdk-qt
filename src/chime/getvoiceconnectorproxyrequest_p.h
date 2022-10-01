// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORPROXYREQUEST_P_H
#define QTAWS_GETVOICECONNECTORPROXYREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorProxyRequest;

class GetVoiceConnectorProxyRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorProxyRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorProxyRequest * const q);
    GetVoiceConnectorProxyRequestPrivate(const GetVoiceConnectorProxyRequestPrivate &other,
                                   GetVoiceConnectorProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
