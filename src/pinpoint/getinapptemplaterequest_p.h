// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPTEMPLATEREQUEST_P_H
#define QTAWS_GETINAPPTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppTemplateRequest;

class GetInAppTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    GetInAppTemplateRequestPrivate(const PinpointRequest::Action action,
                                   GetInAppTemplateRequest * const q);
    GetInAppTemplateRequestPrivate(const GetInAppTemplateRequestPrivate &other,
                                   GetInAppTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
