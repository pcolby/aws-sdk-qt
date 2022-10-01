// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKEMAILREQUEST_P_H
#define QTAWS_SENDBULKEMAILREQUEST_P_H

#include "sesv2request_p.h"
#include "sendbulkemailrequest.h"

namespace QtAws {
namespace SESv2 {

class SendBulkEmailRequest;

class SendBulkEmailRequestPrivate : public SESv2RequestPrivate {

public:
    SendBulkEmailRequestPrivate(const SESv2Request::Action action,
                                   SendBulkEmailRequest * const q);
    SendBulkEmailRequestPrivate(const SendBulkEmailRequestPrivate &other,
                                   SendBulkEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendBulkEmailRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
