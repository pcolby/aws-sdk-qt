// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESREQUEST_P_H
#define QTAWS_LISTALIASESREQUEST_P_H

#include "kmsrequest_p.h"
#include "listaliasesrequest.h"

namespace QtAws {
namespace Kms {

class ListAliasesRequest;

class ListAliasesRequestPrivate : public KmsRequestPrivate {

public:
    ListAliasesRequestPrivate(const KmsRequest::Action action,
                                   ListAliasesRequest * const q);
    ListAliasesRequestPrivate(const ListAliasesRequestPrivate &other,
                                   ListAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAliasesRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
