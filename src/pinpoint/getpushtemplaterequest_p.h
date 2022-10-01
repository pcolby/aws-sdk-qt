// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUSHTEMPLATEREQUEST_P_H
#define QTAWS_GETPUSHTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getpushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetPushTemplateRequest;

class GetPushTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    GetPushTemplateRequestPrivate(const PinpointRequest::Action action,
                                   GetPushTemplateRequest * const q);
    GetPushTemplateRequestPrivate(const GetPushTemplateRequestPrivate &other,
                                   GetPushTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
