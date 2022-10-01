// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINAPPTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEINAPPTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateInAppTemplateRequest;

class UpdateInAppTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateInAppTemplateRequestPrivate(const PinpointRequest::Action action,
                                   UpdateInAppTemplateRequest * const q);
    UpdateInAppTemplateRequestPrivate(const UpdateInAppTemplateRequestPrivate &other,
                                   UpdateInAppTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
