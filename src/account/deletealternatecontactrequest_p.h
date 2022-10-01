// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALTERNATECONTACTREQUEST_P_H
#define QTAWS_DELETEALTERNATECONTACTREQUEST_P_H

#include "accountrequest_p.h"
#include "deletealternatecontactrequest.h"

namespace QtAws {
namespace Account {

class DeleteAlternateContactRequest;

class DeleteAlternateContactRequestPrivate : public AccountRequestPrivate {

public:
    DeleteAlternateContactRequestPrivate(const AccountRequest::Action action,
                                   DeleteAlternateContactRequest * const q);
    DeleteAlternateContactRequestPrivate(const DeleteAlternateContactRequestPrivate &other,
                                   DeleteAlternateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
