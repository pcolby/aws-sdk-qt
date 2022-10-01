// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_UPDATEVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "updatevoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorGroupRequest;

class UpdateVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   UpdateVoiceConnectorGroupRequest * const q);
    UpdateVoiceConnectorGroupRequestPrivate(const UpdateVoiceConnectorGroupRequestPrivate &other,
                                   UpdateVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
