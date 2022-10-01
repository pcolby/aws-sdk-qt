// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILREQUEST_P_H
#define QTAWS_SENDEMAILREQUEST_P_H

#include "sesrequest_p.h"
#include "sendemailrequest.h"

namespace QtAws {
namespace Ses {

class SendEmailRequest;

class SendEmailRequestPrivate : public SesRequestPrivate {

public:
    SendEmailRequestPrivate(const SesRequest::Action action,
                                   SendEmailRequest * const q);
    SendEmailRequestPrivate(const SendEmailRequestPrivate &other,
                                   SendEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
