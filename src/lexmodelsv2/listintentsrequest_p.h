// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTENTSREQUEST_P_H
#define QTAWS_LISTINTENTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListIntentsRequest;

class ListIntentsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListIntentsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListIntentsRequest * const q);
    ListIntentsRequestPrivate(const ListIntentsRequestPrivate &other,
                                   ListIntentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIntentsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
