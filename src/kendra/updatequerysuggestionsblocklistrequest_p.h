// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H
#define QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H

#include "kendrarequest_p.h"
#include "updatequerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsBlockListRequest;

class UpdateQuerySuggestionsBlockListRequestPrivate : public KendraRequestPrivate {

public:
    UpdateQuerySuggestionsBlockListRequestPrivate(const KendraRequest::Action action,
                                   UpdateQuerySuggestionsBlockListRequest * const q);
    UpdateQuerySuggestionsBlockListRequestPrivate(const UpdateQuerySuggestionsBlockListRequestPrivate &other,
                                   UpdateQuerySuggestionsBlockListRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
