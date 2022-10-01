// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDACTIVATIONCODEREQUEST_P_H
#define QTAWS_SENDACTIVATIONCODEREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "sendactivationcoderequest.h"

namespace QtAws {
namespace SsmContacts {

class SendActivationCodeRequest;

class SendActivationCodeRequestPrivate : public SsmContactsRequestPrivate {

public:
    SendActivationCodeRequestPrivate(const SsmContactsRequest::Action action,
                                   SendActivationCodeRequest * const q);
    SendActivationCodeRequestPrivate(const SendActivationCodeRequestPrivate &other,
                                   SendActivationCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendActivationCodeRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
