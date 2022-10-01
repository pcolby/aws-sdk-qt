// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMSSANDBOXPHONENUMBERSREQUEST_P_H
#define QTAWS_LISTSMSSANDBOXPHONENUMBERSREQUEST_P_H

#include "snsrequest_p.h"
#include "listsmssandboxphonenumbersrequest.h"

namespace QtAws {
namespace Sns {

class ListSMSSandboxPhoneNumbersRequest;

class ListSMSSandboxPhoneNumbersRequestPrivate : public SnsRequestPrivate {

public:
    ListSMSSandboxPhoneNumbersRequestPrivate(const SnsRequest::Action action,
                                   ListSMSSandboxPhoneNumbersRequest * const q);
    ListSMSSandboxPhoneNumbersRequestPrivate(const ListSMSSandboxPhoneNumbersRequestPrivate &other,
                                   ListSMSSandboxPhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSMSSandboxPhoneNumbersRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
