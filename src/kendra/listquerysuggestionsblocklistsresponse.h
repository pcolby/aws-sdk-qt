// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSRESPONSE_H
#define QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSRESPONSE_H

#include "kendraresponse.h"
#include "listquerysuggestionsblocklistsrequest.h"

namespace QtAws {
namespace Kendra {

class ListQuerySuggestionsBlockListsResponsePrivate;

class QTAWSKENDRA_EXPORT ListQuerySuggestionsBlockListsResponse : public KendraResponse {
    Q_OBJECT

public:
    ListQuerySuggestionsBlockListsResponse(const ListQuerySuggestionsBlockListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQuerySuggestionsBlockListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQuerySuggestionsBlockListsResponse)
    Q_DISABLE_COPY(ListQuerySuggestionsBlockListsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
