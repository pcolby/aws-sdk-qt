// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSTEMPLATEREQUEST_P_H
#define QTAWS_CREATESMSTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createsmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateSmsTemplateRequest;

class CreateSmsTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    CreateSmsTemplateRequestPrivate(const PinpointRequest::Action action,
                                   CreateSmsTemplateRequest * const q);
    CreateSmsTemplateRequestPrivate(const CreateSmsTemplateRequestPrivate &other,
                                   CreateSmsTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
