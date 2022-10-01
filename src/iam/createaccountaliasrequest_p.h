// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTALIASREQUEST_P_H
#define QTAWS_CREATEACCOUNTALIASREQUEST_P_H

#include "iamrequest_p.h"
#include "createaccountaliasrequest.h"

namespace QtAws {
namespace Iam {

class CreateAccountAliasRequest;

class CreateAccountAliasRequestPrivate : public IamRequestPrivate {

public:
    CreateAccountAliasRequestPrivate(const IamRequest::Action action,
                                   CreateAccountAliasRequest * const q);
    CreateAccountAliasRequestPrivate(const CreateAccountAliasRequestPrivate &other,
                                   CreateAccountAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccountAliasRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
