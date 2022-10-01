// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSREQUEST_P_H
#define QTAWS_LISTBOTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbotsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotsRequest;

class ListBotsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBotsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBotsRequest * const q);
    ListBotsRequestPrivate(const ListBotsRequestPrivate &other,
                                   ListBotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
