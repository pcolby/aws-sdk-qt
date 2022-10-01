// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORPROXYREQUEST_P_H
#define QTAWS_PUTVOICECONNECTORPROXYREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectorproxyrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorProxyRequest;

class PutVoiceConnectorProxyRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorProxyRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorProxyRequest * const q);
    PutVoiceConnectorProxyRequestPrivate(const PutVoiceConnectorProxyRequestPrivate &other,
                                   PutVoiceConnectorProxyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorProxyRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
