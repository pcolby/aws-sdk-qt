// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMPHONENUMBERREQUEST_P_H
#define QTAWS_CLAIMPHONENUMBERREQUEST_P_H

#include "connectrequest_p.h"
#include "claimphonenumberrequest.h"

namespace QtAws {
namespace Connect {

class ClaimPhoneNumberRequest;

class ClaimPhoneNumberRequestPrivate : public ConnectRequestPrivate {

public:
    ClaimPhoneNumberRequestPrivate(const ConnectRequest::Action action,
                                   ClaimPhoneNumberRequest * const q);
    ClaimPhoneNumberRequestPrivate(const ClaimPhoneNumberRequestPrivate &other,
                                   ClaimPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClaimPhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
