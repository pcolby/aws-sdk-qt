// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTRIBUTORINSIGHTSRESPONSE_H
#define QTAWS_UPDATECONTRIBUTORINSIGHTSRESPONSE_H

#include "dynamodbresponse.h"
#include "updatecontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContributorInsightsResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateContributorInsightsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateContributorInsightsResponse(const UpdateContributorInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContributorInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContributorInsightsResponse)
    Q_DISABLE_COPY(UpdateContributorInsightsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
