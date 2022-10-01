// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALTERNATECONTACTREQUEST_P_H
#define QTAWS_PUTALTERNATECONTACTREQUEST_P_H

#include "accountrequest_p.h"
#include "putalternatecontactrequest.h"

namespace QtAws {
namespace Account {

class PutAlternateContactRequest;

class PutAlternateContactRequestPrivate : public AccountRequestPrivate {

public:
    PutAlternateContactRequestPrivate(const AccountRequest::Action action,
                                   PutAlternateContactRequest * const q);
    PutAlternateContactRequestPrivate(const PutAlternateContactRequestPrivate &other,
                                   PutAlternateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
