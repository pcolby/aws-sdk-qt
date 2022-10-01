// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLERESPONSE_H
#define QTAWS_DESCRIBEGLOBALTABLERESPONSE_H

#include "dynamodbresponse.h"
#include "describeglobaltablerequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeGlobalTableResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeGlobalTableResponse(const DescribeGlobalTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalTableResponse)
    Q_DISABLE_COPY(DescribeGlobalTableResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
