// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTRESPONSE_H
#define QTAWS_DESCRIBEEXPORTRESPONSE_H

#include "dynamodbresponse.h"
#include "describeexportrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeExportResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeExportResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeExportResponse(const DescribeExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportResponse)
    Q_DISABLE_COPY(DescribeExportResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
