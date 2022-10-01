// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATEREQUEST_P_H
#define QTAWS_GETEMAILTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailTemplateRequest;

class GetEmailTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    GetEmailTemplateRequestPrivate(const PinpointRequest::Action action,
                                   GetEmailTemplateRequest * const q);
    GetEmailTemplateRequestPrivate(const GetEmailTemplateRequestPrivate &other,
                                   GetEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
