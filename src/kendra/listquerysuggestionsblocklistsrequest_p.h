// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSREQUEST_P_H
#define QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSREQUEST_P_H

#include "kendrarequest_p.h"
#include "listquerysuggestionsblocklistsrequest.h"

namespace QtAws {
namespace Kendra {

class ListQuerySuggestionsBlockListsRequest;

class ListQuerySuggestionsBlockListsRequestPrivate : public KendraRequestPrivate {

public:
    ListQuerySuggestionsBlockListsRequestPrivate(const KendraRequest::Action action,
                                   ListQuerySuggestionsBlockListsRequest * const q);
    ListQuerySuggestionsBlockListsRequestPrivate(const ListQuerySuggestionsBlockListsRequestPrivate &other,
                                   ListQuerySuggestionsBlockListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQuerySuggestionsBlockListsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
