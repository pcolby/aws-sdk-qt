// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSREQUEST_H
#define QTAWS_LISTQUERYSUGGESTIONSBLOCKLISTSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListQuerySuggestionsBlockListsRequestPrivate;

class QTAWSKENDRA_EXPORT ListQuerySuggestionsBlockListsRequest : public KendraRequest {

public:
    ListQuerySuggestionsBlockListsRequest(const ListQuerySuggestionsBlockListsRequest &other);
    ListQuerySuggestionsBlockListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQuerySuggestionsBlockListsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
