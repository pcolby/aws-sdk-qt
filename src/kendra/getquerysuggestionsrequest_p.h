// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSUGGESTIONSREQUEST_P_H
#define QTAWS_GETQUERYSUGGESTIONSREQUEST_P_H

#include "kendrarequest_p.h"
#include "getquerysuggestionsrequest.h"

namespace QtAws {
namespace Kendra {

class GetQuerySuggestionsRequest;

class GetQuerySuggestionsRequestPrivate : public KendraRequestPrivate {

public:
    GetQuerySuggestionsRequestPrivate(const KendraRequest::Action action,
                                   GetQuerySuggestionsRequest * const q);
    GetQuerySuggestionsRequestPrivate(const GetQuerySuggestionsRequestPrivate &other,
                                   GetQuerySuggestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQuerySuggestionsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
