// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H
#define QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H

#include "kendrarequest_p.h"
#include "createquerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class CreateQuerySuggestionsBlockListRequest;

class CreateQuerySuggestionsBlockListRequestPrivate : public KendraRequestPrivate {

public:
    CreateQuerySuggestionsBlockListRequestPrivate(const KendraRequest::Action action,
                                   CreateQuerySuggestionsBlockListRequest * const q);
    CreateQuerySuggestionsBlockListRequestPrivate(const CreateQuerySuggestionsBlockListRequestPrivate &other,
                                   CreateQuerySuggestionsBlockListRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
