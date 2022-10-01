// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTINSLOTTYPESREQUEST_P_H
#define QTAWS_LISTBUILTINSLOTTYPESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listbuiltinslottypesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInSlotTypesRequest;

class ListBuiltInSlotTypesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListBuiltInSlotTypesRequestPrivate(const LexModelsV2Request::Action action,
                                   ListBuiltInSlotTypesRequest * const q);
    ListBuiltInSlotTypesRequestPrivate(const ListBuiltInSlotTypesRequestPrivate &other,
                                   ListBuiltInSlotTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuiltInSlotTypesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
