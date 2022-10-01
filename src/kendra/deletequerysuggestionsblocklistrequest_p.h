// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H
#define QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H

#include "kendrarequest_p.h"
#include "deletequerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteQuerySuggestionsBlockListRequest;

class DeleteQuerySuggestionsBlockListRequestPrivate : public KendraRequestPrivate {

public:
    DeleteQuerySuggestionsBlockListRequestPrivate(const KendraRequest::Action action,
                                   DeleteQuerySuggestionsBlockListRequest * const q);
    DeleteQuerySuggestionsBlockListRequestPrivate(const DeleteQuerySuggestionsBlockListRequestPrivate &other,
                                   DeleteQuerySuggestionsBlockListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
