// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTRIBUTORINSIGHTSRESPONSE_P_H
#define QTAWS_UPDATECONTRIBUTORINSIGHTSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContributorInsightsResponse;

class UpdateContributorInsightsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateContributorInsightsResponsePrivate(UpdateContributorInsightsResponse * const q);

    void parseUpdateContributorInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContributorInsightsResponse)
    Q_DISABLE_COPY(UpdateContributorInsightsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
