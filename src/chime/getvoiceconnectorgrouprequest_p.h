// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_GETVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorGroupRequest;

class GetVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorGroupRequest * const q);
    GetVoiceConnectorGroupRequestPrivate(const GetVoiceConnectorGroupRequestPrivate &other,
                                   GetVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
