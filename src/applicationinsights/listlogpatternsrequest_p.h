// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSREQUEST_P_H
#define QTAWS_LISTLOGPATTERNSREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "listlogpatternsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternsRequest;

class ListLogPatternsRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    ListLogPatternsRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   ListLogPatternsRequest * const q);
    ListLogPatternsRequestPrivate(const ListLogPatternsRequestPrivate &other,
                                   ListLogPatternsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLogPatternsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
