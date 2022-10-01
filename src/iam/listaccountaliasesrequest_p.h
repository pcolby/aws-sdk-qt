// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTALIASESREQUEST_P_H
#define QTAWS_LISTACCOUNTALIASESREQUEST_P_H

#include "iamrequest_p.h"
#include "listaccountaliasesrequest.h"

namespace QtAws {
namespace Iam {

class ListAccountAliasesRequest;

class ListAccountAliasesRequestPrivate : public IamRequestPrivate {

public:
    ListAccountAliasesRequestPrivate(const IamRequest::Action action,
                                   ListAccountAliasesRequest * const q);
    ListAccountAliasesRequestPrivate(const ListAccountAliasesRequestPrivate &other,
                                   ListAccountAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountAliasesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
