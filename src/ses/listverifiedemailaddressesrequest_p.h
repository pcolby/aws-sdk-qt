// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERIFIEDEMAILADDRESSESREQUEST_P_H
#define QTAWS_LISTVERIFIEDEMAILADDRESSESREQUEST_P_H

#include "sesrequest_p.h"
#include "listverifiedemailaddressesrequest.h"

namespace QtAws {
namespace Ses {

class ListVerifiedEmailAddressesRequest;

class ListVerifiedEmailAddressesRequestPrivate : public SesRequestPrivate {

public:
    ListVerifiedEmailAddressesRequestPrivate(const SesRequest::Action action,
                                   ListVerifiedEmailAddressesRequest * const q);
    ListVerifiedEmailAddressesRequestPrivate(const ListVerifiedEmailAddressesRequestPrivate &other,
                                   ListVerifiedEmailAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVerifiedEmailAddressesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
