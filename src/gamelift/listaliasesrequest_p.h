// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESREQUEST_P_H
#define QTAWS_LISTALIASESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "listaliasesrequest.h"

namespace QtAws {
namespace GameLift {

class ListAliasesRequest;

class ListAliasesRequestPrivate : public GameLiftRequestPrivate {

public:
    ListAliasesRequestPrivate(const GameLiftRequest::Action action,
                                   ListAliasesRequest * const q);
    ListAliasesRequestPrivate(const ListAliasesRequestPrivate &other,
                                   ListAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAliasesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
