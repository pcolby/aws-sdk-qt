// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSRESPONSE_P_H
#define QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListQuerySuggestionsBlockListsResponse;

class ListQuerySuggestionsBlockListsResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListQuerySuggestionsBlockListsResponsePrivate(ListQuerySuggestionsBlockListsResponse * const q);

    void parseListQuerySuggestionsBlockListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQuerySuggestionsBlockListsResponse)
    Q_DISABLE_COPY(ListQuerySuggestionsBlockListsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
