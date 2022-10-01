// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSCONFIGREQUEST_P_H
#define QTAWS_UPDATEQUERYSUGGESTIONSCONFIGREQUEST_P_H

#include "kendrarequest_p.h"
#include "updatequerysuggestionsconfigrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsConfigRequest;

class UpdateQuerySuggestionsConfigRequestPrivate : public KendraRequestPrivate {

public:
    UpdateQuerySuggestionsConfigRequestPrivate(const KendraRequest::Action action,
                                   UpdateQuerySuggestionsConfigRequest * const q);
    UpdateQuerySuggestionsConfigRequestPrivate(const UpdateQuerySuggestionsConfigRequestPrivate &other,
                                   UpdateQuerySuggestionsConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateQuerySuggestionsConfigRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
