// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICETEMPLATEREQUEST_P_H
#define QTAWS_GETVOICETEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getvoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceTemplateRequest;

class GetVoiceTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    GetVoiceTemplateRequestPrivate(const PinpointRequest::Action action,
                                   GetVoiceTemplateRequest * const q);
    GetVoiceTemplateRequestPrivate(const GetVoiceTemplateRequestPrivate &other,
                                   GetVoiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
