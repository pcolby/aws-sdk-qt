// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESREQUEST_P_H
#define QTAWS_LISTALIASESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listaliasesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAliasesRequest;

class ListAliasesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListAliasesRequestPrivate(const WorkMailRequest::Action action,
                                   ListAliasesRequest * const q);
    ListAliasesRequestPrivate(const ListAliasesRequestPrivate &other,
                                   ListAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAliasesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
