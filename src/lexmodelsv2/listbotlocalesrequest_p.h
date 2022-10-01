// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTLOCALESREQUEST_P_H
#define QTAWS_LISTBOTLOCALESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbotlocalesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotLocalesRequest;

class ListBotLocalesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBotLocalesRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBotLocalesRequest * const q);
    ListBotLocalesRequestPrivate(const ListBotLocalesRequestPrivate &other,
                                   ListBotLocalesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotLocalesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
