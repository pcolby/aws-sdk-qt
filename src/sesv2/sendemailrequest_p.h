// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILREQUEST_P_H
#define QTAWS_SENDEMAILREQUEST_P_H

#include "sesv2request_p.h"
#include "sendemailrequest.h"

namespace QtAws {
namespace SESv2 {

class SendEmailRequest;

class SendEmailRequestPrivate : public SESv2RequestPrivate {

public:
    SendEmailRequestPrivate(const SESv2Request::Action action,
                                   SendEmailRequest * const q);
    SendEmailRequestPrivate(const SendEmailRequestPrivate &other,
                                   SendEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendEmailRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
