// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORREQUEST_P_H
#define QTAWS_UPDATEVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "updatevoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorRequest;

class UpdateVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   UpdateVoiceConnectorRequest * const q);
    UpdateVoiceConnectorRequestPrivate(const UpdateVoiceConnectorRequestPrivate &other,
                                   UpdateVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
