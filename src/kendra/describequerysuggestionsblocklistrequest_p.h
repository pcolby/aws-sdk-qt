// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSBLOCKLISTREQUEST_P_H

#include "kendrarequest_p.h"
#include "describequerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsBlockListRequest;

class DescribeQuerySuggestionsBlockListRequestPrivate : public KendraRequestPrivate {

public:
    DescribeQuerySuggestionsBlockListRequestPrivate(const KendraRequest::Action action,
                                   DescribeQuerySuggestionsBlockListRequest * const q);
    DescribeQuerySuggestionsBlockListRequestPrivate(const DescribeQuerySuggestionsBlockListRequestPrivate &other,
                                   DescribeQuerySuggestionsBlockListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQuerySuggestionsBlockListRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
