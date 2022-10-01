// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTALIASREQUEST_P_H
#define QTAWS_PUTACCOUNTALIASREQUEST_P_H

#include "supportapprequest_p.h"
#include "putaccountaliasrequest.h"

namespace QtAws {
namespace SupportApp {

class PutAccountAliasRequest;

class PutAccountAliasRequestPrivate : public SupportAppRequestPrivate {

public:
    PutAccountAliasRequestPrivate(const SupportAppRequest::Action action,
                                   PutAccountAliasRequest * const q);
    PutAccountAliasRequestPrivate(const PutAccountAliasRequestPrivate &other,
                                   PutAccountAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountAliasRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
