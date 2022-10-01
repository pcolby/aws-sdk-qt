// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGREQUEST_P_H

#include "kendrarequest_p.h"
#include "describequerysuggestionsconfigrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsConfigRequest;

class DescribeQuerySuggestionsConfigRequestPrivate : public KendraRequestPrivate {

public:
    DescribeQuerySuggestionsConfigRequestPrivate(const KendraRequest::Action action,
                                   DescribeQuerySuggestionsConfigRequest * const q);
    DescribeQuerySuggestionsConfigRequestPrivate(const DescribeQuerySuggestionsConfigRequestPrivate &other,
                                   DescribeQuerySuggestionsConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQuerySuggestionsConfigRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
