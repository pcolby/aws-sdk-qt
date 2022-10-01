// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHANALYSESREQUEST_P_H
#define QTAWS_SEARCHANALYSESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "searchanalysesrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchAnalysesRequest;

class SearchAnalysesRequestPrivate : public QuickSightRequestPrivate {

public:
    SearchAnalysesRequestPrivate(const QuickSightRequest::Action action,
                                   SearchAnalysesRequest * const q);
    SearchAnalysesRequestPrivate(const SearchAnalysesRequestPrivate &other,
                                   SearchAnalysesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchAnalysesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
