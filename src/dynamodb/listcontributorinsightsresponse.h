// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTRIBUTORINSIGHTSRESPONSE_H
#define QTAWS_LISTCONTRIBUTORINSIGHTSRESPONSE_H

#include "dynamodbresponse.h"
#include "listcontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListContributorInsightsResponsePrivate;

class QTAWSDYNAMODB_EXPORT ListContributorInsightsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ListContributorInsightsResponse(const ListContributorInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContributorInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContributorInsightsResponse)
    Q_DISABLE_COPY(ListContributorInsightsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
