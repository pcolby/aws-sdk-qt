// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTRESPONSE_P_H
#define QTAWS_DESCRIBEIMPORTRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeImportResponse;

class DescribeImportResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeImportResponsePrivate(DescribeImportResponse * const q);

    void parseDescribeImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImportResponse)
    Q_DISABLE_COPY(DescribeImportResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
