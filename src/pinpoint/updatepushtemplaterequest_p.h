// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUSHTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEPUSHTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatepushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdatePushTemplateRequest;

class UpdatePushTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdatePushTemplateRequestPrivate(const PinpointRequest::Action action,
                                   UpdatePushTemplateRequest * const q);
    UpdatePushTemplateRequestPrivate(const UpdatePushTemplateRequestPrivate &other,
                                   UpdatePushTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
