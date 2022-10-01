// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARQUERYSUGGESTIONSREQUEST_P_H
#define QTAWS_CLEARQUERYSUGGESTIONSREQUEST_P_H

#include "kendrarequest_p.h"
#include "clearquerysuggestionsrequest.h"

namespace QtAws {
namespace Kendra {

class ClearQuerySuggestionsRequest;

class ClearQuerySuggestionsRequestPrivate : public KendraRequestPrivate {

public:
    ClearQuerySuggestionsRequestPrivate(const KendraRequest::Action action,
                                   ClearQuerySuggestionsRequest * const q);
    ClearQuerySuggestionsRequestPrivate(const ClearQuerySuggestionsRequestPrivate &other,
                                   ClearQuerySuggestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClearQuerySuggestionsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
