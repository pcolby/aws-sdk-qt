// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTRIBUTORINSIGHTSREQUEST_P_H
#define QTAWS_LISTCONTRIBUTORINSIGHTSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "listcontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListContributorInsightsRequest;

class ListContributorInsightsRequestPrivate : public DynamoDbRequestPrivate {

public:
    ListContributorInsightsRequestPrivate(const DynamoDbRequest::Action action,
                                   ListContributorInsightsRequest * const q);
    ListContributorInsightsRequestPrivate(const ListContributorInsightsRequestPrivate &other,
                                   ListContributorInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
