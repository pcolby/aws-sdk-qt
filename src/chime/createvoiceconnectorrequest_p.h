// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORREQUEST_P_H
#define QTAWS_CREATEVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "createvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorRequest;

class CreateVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    CreateVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   CreateVoiceConnectorRequest * const q);
    CreateVoiceConnectorRequestPrivate(const CreateVoiceConnectorRequestPrivate &other,
                                   CreateVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
