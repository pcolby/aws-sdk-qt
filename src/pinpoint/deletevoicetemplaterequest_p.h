// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICETEMPLATEREQUEST_P_H
#define QTAWS_DELETEVOICETEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletevoicetemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceTemplateRequest;

class DeleteVoiceTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteVoiceTemplateRequestPrivate(const PinpointRequest::Action action,
                                   DeleteVoiceTemplateRequest * const q);
    DeleteVoiceTemplateRequestPrivate(const DeleteVoiceTemplateRequestPrivate &other,
                                   DeleteVoiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
