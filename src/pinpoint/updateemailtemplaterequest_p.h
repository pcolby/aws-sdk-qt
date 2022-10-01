// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEEMAILTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailTemplateRequest;

class UpdateEmailTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateEmailTemplateRequestPrivate(const PinpointRequest::Action action,
                                   UpdateEmailTemplateRequest * const q);
    UpdateEmailTemplateRequestPrivate(const UpdateEmailTemplateRequestPrivate &other,
                                   UpdateEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
