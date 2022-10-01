// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINSIGHTSREQUEST_P_H
#define QTAWS_SEARCHINSIGHTSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "searchinsightsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchInsightsRequest;

class SearchInsightsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    SearchInsightsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   SearchInsightsRequest * const q);
    SearchInsightsRequestPrivate(const SearchInsightsRequestPrivate &other,
                                   SearchInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
