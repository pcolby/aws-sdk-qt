// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTININTENTSREQUEST_P_H
#define QTAWS_LISTBUILTININTENTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbuiltinintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInIntentsRequest;

class ListBuiltInIntentsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBuiltInIntentsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBuiltInIntentsRequest * const q);
    ListBuiltInIntentsRequestPrivate(const ListBuiltInIntentsRequestPrivate &other,
                                   ListBuiltInIntentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuiltInIntentsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
