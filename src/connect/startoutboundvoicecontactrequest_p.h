// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOUTBOUNDVOICECONTACTREQUEST_P_H
#define QTAWS_STARTOUTBOUNDVOICECONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "startoutboundvoicecontactrequest.h"

namespace QtAws {
namespace Connect {

class StartOutboundVoiceContactRequest;

class StartOutboundVoiceContactRequestPrivate : public ConnectRequestPrivate {

public:
    StartOutboundVoiceContactRequestPrivate(const ConnectRequest::Action action,
                                   StartOutboundVoiceContactRequest * const q);
    StartOutboundVoiceContactRequestPrivate(const StartOutboundVoiceContactRequestPrivate &other,
                                   StartOutboundVoiceContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartOutboundVoiceContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
