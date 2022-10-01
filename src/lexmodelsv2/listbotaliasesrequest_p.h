// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTALIASESREQUEST_P_H
#define QTAWS_LISTBOTALIASESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbotaliasesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotAliasesRequest;

class ListBotAliasesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBotAliasesRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBotAliasesRequest * const q);
    ListBotAliasesRequestPrivate(const ListBotAliasesRequestPrivate &other,
                                   ListBotAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotAliasesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
