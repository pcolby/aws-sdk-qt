// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDRAWEMAILREQUEST_P_H
#define QTAWS_SENDRAWEMAILREQUEST_P_H

#include "sesrequest_p.h"
#include "sendrawemailrequest.h"

namespace QtAws {
namespace Ses {

class SendRawEmailRequest;

class SendRawEmailRequestPrivate : public SesRequestPrivate {

public:
    SendRawEmailRequestPrivate(const SesRequest::Action action,
                                   SendRawEmailRequest * const q);
    SendRawEmailRequestPrivate(const SendRawEmailRequestPrivate &other,
                                   SendRawEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendRawEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
