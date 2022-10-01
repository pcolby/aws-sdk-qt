// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSOPTEDOUTREQUEST_P_H
#define QTAWS_LISTPHONENUMBERSOPTEDOUTREQUEST_P_H

#include "snsrequest_p.h"
#include "listphonenumbersoptedoutrequest.h"

namespace QtAws {
namespace Sns {

class ListPhoneNumbersOptedOutRequest;

class ListPhoneNumbersOptedOutRequestPrivate : public SnsRequestPrivate {

public:
    ListPhoneNumbersOptedOutRequestPrivate(const SnsRequest::Action action,
                                   ListPhoneNumbersOptedOutRequest * const q);
    ListPhoneNumbersOptedOutRequestPrivate(const ListPhoneNumbersOptedOutRequestPrivate &other,
                                   ListPhoneNumbersOptedOutRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersOptedOutRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
