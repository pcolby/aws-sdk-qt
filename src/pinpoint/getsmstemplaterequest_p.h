// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSTEMPLATEREQUEST_P_H
#define QTAWS_GETSMSTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsTemplateRequest;

class GetSmsTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    GetSmsTemplateRequestPrivate(const PinpointRequest::Action action,
                                   GetSmsTemplateRequest * const q);
    GetSmsTemplateRequestPrivate(const GetSmsTemplateRequestPrivate &other,
                                   GetSmsTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
