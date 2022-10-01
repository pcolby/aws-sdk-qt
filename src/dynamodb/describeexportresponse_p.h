// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTRESPONSE_P_H
#define QTAWS_DESCRIBEEXPORTRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeExportResponse;

class DescribeExportResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeExportResponsePrivate(DescribeExportResponse * const q);

    void parseDescribeExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExportResponse)
    Q_DISABLE_COPY(DescribeExportResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
