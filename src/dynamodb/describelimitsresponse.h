// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIMITSRESPONSE_H
#define QTAWS_DESCRIBELIMITSRESPONSE_H

#include "dynamodbresponse.h"
#include "describelimitsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeLimitsResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeLimitsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeLimitsResponse(const DescribeLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLimitsResponse)
    Q_DISABLE_COPY(DescribeLimitsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
