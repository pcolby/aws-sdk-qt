// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTSREQUEST_P_H
#define QTAWS_LISTSLOTSREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "listslotsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotsRequest;

class ListSlotsRequestPrivate : public LexModelsV2RequestPrivate {

public:
    ListSlotsRequestPrivate(const LexModelsV2Request::Action action,
                                   ListSlotsRequest * const q);
    ListSlotsRequestPrivate(const ListSlotsRequestPrivate &other,
                                   ListSlotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSlotsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
