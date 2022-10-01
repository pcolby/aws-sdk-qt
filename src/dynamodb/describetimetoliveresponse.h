// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMETOLIVERESPONSE_H
#define QTAWS_DESCRIBETIMETOLIVERESPONSE_H

#include "dynamodbresponse.h"
#include "describetimetoliverequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTimeToLiveResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeTimeToLiveResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeTimeToLiveResponse(const DescribeTimeToLiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTimeToLiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeToLiveResponse)
    Q_DISABLE_COPY(DescribeTimeToLiveResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
