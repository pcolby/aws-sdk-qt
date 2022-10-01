// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_CREATEVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "createvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorGroupRequest;

class CreateVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    CreateVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   CreateVoiceConnectorGroupRequest * const q);
    CreateVoiceConnectorGroupRequestPrivate(const CreateVoiceConnectorGroupRequestPrivate &other,
                                   CreateVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
