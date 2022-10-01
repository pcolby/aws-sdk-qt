// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTTYPESREQUEST_P_H
#define QTAWS_LISTSLOTTYPESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listslottypesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotTypesRequest;

class ListSlotTypesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListSlotTypesRequestPrivate(const LexModelsV2Request::Action action,
                                   ListSlotTypesRequest * const q);
    ListSlotTypesRequestPrivate(const ListSlotTypesRequestPrivate &other,
                                   ListSlotTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSlotTypesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
