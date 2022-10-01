// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTALIASREQUEST_P_H
#define QTAWS_GETACCOUNTALIASREQUEST_P_H

#include "supportapprequest_p.h"
#include "getaccountaliasrequest.h"

namespace QtAws {
namespace SupportApp {

class GetAccountAliasRequest;

class GetAccountAliasRequestPrivate : public SupportAppRequestPrivate {

public:
    GetAccountAliasRequestPrivate(const SupportAppRequest::Action action,
                                   GetAccountAliasRequest * const q);
    GetAccountAliasRequestPrivate(const GetAccountAliasRequestPrivate &other,
                                   GetAccountAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountAliasRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
