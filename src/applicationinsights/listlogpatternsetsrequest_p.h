// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSETSREQUEST_P_H
#define QTAWS_LISTLOGPATTERNSETSREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "listlogpatternsetsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternSetsRequest;

class ListLogPatternSetsRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    ListLogPatternSetsRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   ListLogPatternSetsRequest * const q);
    ListLogPatternSetsRequestPrivate(const ListLogPatternSetsRequestPrivate &other,
                                   ListLogPatternSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLogPatternSetsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
