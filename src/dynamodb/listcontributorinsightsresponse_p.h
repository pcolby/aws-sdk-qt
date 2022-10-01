// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTRIBUTORINSIGHTSRESPONSE_P_H
#define QTAWS_LISTCONTRIBUTORINSIGHTSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ListContributorInsightsResponse;

class ListContributorInsightsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ListContributorInsightsResponsePrivate(ListContributorInsightsResponse * const q);

    void parseListContributorInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContributorInsightsResponse)
    Q_DISABLE_COPY(ListContributorInsightsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
