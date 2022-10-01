// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTRIBUTORINSIGHTSREQUEST_P_H
#define QTAWS_UPDATECONTRIBUTORINSIGHTSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updatecontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContributorInsightsRequest;

class UpdateContributorInsightsRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateContributorInsightsRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateContributorInsightsRequest * const q);
    UpdateContributorInsightsRequestPrivate(const UpdateContributorInsightsRequestPrivate &other,
                                   UpdateContributorInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
