// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSTEMPLATEREQUEST_P_H
#define QTAWS_UPDATESMSTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatesmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsTemplateRequest;

class UpdateSmsTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateSmsTemplateRequestPrivate(const PinpointRequest::Action action,
                                   UpdateSmsTemplateRequest * const q);
    UpdateSmsTemplateRequestPrivate(const UpdateSmsTemplateRequestPrivate &other,
                                   UpdateSmsTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
