// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALIESFORINSIGHTREQUEST_P_H
#define QTAWS_LISTANOMALIESFORINSIGHTREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listanomaliesforinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomaliesForInsightRequest;

class ListAnomaliesForInsightRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListAnomaliesForInsightRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListAnomaliesForInsightRequest * const q);
    ListAnomaliesForInsightRequestPrivate(const ListAnomaliesForInsightRequestPrivate &other,
                                   ListAnomaliesForInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomaliesForInsightRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
