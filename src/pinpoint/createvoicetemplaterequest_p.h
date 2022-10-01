// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICETEMPLATEREQUEST_P_H
#define QTAWS_CREATEVOICETEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createvoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateVoiceTemplateRequest;

class CreateVoiceTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    CreateVoiceTemplateRequestPrivate(const PinpointRequest::Action action,
                                   CreateVoiceTemplateRequest * const q);
    CreateVoiceTemplateRequestPrivate(const CreateVoiceTemplateRequestPrivate &other,
                                   CreateVoiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
