// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINAPPTEMPLATEREQUEST_P_H
#define QTAWS_CREATEINAPPTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateInAppTemplateRequest;

class CreateInAppTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    CreateInAppTemplateRequestPrivate(const PinpointRequest::Action action,
                                   CreateInAppTemplateRequest * const q);
    CreateInAppTemplateRequestPrivate(const CreateInAppTemplateRequestPrivate &other,
                                   CreateInAppTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
