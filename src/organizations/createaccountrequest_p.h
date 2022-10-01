// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTREQUEST_P_H
#define QTAWS_CREATEACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "createaccountrequest.h"

namespace QtAws {
namespace Organizations {

class CreateAccountRequest;

class CreateAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    CreateAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   CreateAccountRequest * const q);
    CreateAccountRequestPrivate(const CreateAccountRequestPrivate &other,
                                   CreateAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
