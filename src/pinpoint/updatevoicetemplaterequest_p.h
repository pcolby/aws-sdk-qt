// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICETEMPLATEREQUEST_P_H
#define QTAWS_UPDATEVOICETEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatevoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceTemplateRequest;

class UpdateVoiceTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateVoiceTemplateRequestPrivate(const PinpointRequest::Action action,
                                   UpdateVoiceTemplateRequest * const q);
    UpdateVoiceTemplateRequestPrivate(const UpdateVoiceTemplateRequestPrivate &other,
                                   UpdateVoiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
