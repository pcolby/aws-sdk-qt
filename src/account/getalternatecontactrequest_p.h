// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALTERNATECONTACTREQUEST_P_H
#define QTAWS_GETALTERNATECONTACTREQUEST_P_H

#include "accountrequest_p.h"
#include "getalternatecontactrequest.h"

namespace QtAws {
namespace Account {

class GetAlternateContactRequest;

class GetAlternateContactRequestPrivate : public AccountRequestPrivate {

public:
    GetAlternateContactRequestPrivate(const AccountRequest::Action action,
                                   GetAlternateContactRequest * const q);
    GetAlternateContactRequestPrivate(const GetAlternateContactRequestPrivate &other,
                                   GetAlternateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
