// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESREQUEST_P_H
#define QTAWS_LISTALIASESREQUEST_P_H

#include "lambdarequest_p.h"
#include "listaliasesrequest.h"

namespace QtAws {
namespace Lambda {

class ListAliasesRequest;

class ListAliasesRequestPrivate : public LambdaRequestPrivate {

public:
    ListAliasesRequestPrivate(const LambdaRequest::Action action,
                                   ListAliasesRequest * const q);
    ListAliasesRequestPrivate(const ListAliasesRequestPrivate &other,
                                   ListAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAliasesRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
