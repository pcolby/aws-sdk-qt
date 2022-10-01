// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUSHTEMPLATEREQUEST_P_H
#define QTAWS_CREATEPUSHTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createpushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreatePushTemplateRequest;

class CreatePushTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    CreatePushTemplateRequestPrivate(const PinpointRequest::Action action,
                                   CreatePushTemplateRequest * const q);
    CreatePushTemplateRequestPrivate(const CreatePushTemplateRequestPrivate &other,
                                   CreatePushTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
