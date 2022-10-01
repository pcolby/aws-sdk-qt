// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORREQUEST_P_H
#define QTAWS_GETVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorRequest;

class GetVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorRequest * const q);
    GetVoiceConnectorRequestPrivate(const GetVoiceConnectorRequestPrivate &other,
                                   GetVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
