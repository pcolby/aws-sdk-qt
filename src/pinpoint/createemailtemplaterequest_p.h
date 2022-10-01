// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILTEMPLATEREQUEST_P_H
#define QTAWS_CREATEEMAILTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateEmailTemplateRequest;

class CreateEmailTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    CreateEmailTemplateRequestPrivate(const PinpointRequest::Action action,
                                   CreateEmailTemplateRequest * const q);
    CreateEmailTemplateRequestPrivate(const CreateEmailTemplateRequestPrivate &other,
                                   CreateEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
