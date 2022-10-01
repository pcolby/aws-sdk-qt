// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTVERSIONSREQUEST_P_H
#define QTAWS_LISTBOTVERSIONSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbotversionsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotVersionsRequest;

class ListBotVersionsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBotVersionsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBotVersionsRequest * const q);
    ListBotVersionsRequestPrivate(const ListBotVersionsRequestPrivate &other,
                                   ListBotVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotVersionsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
