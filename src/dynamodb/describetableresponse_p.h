// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESPONSE_P_H
#define QTAWS_DESCRIBETABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTableResponse;

class DescribeTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeTableResponsePrivate(DescribeTableResponse * const q);

    void parseDescribeTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableResponse)
    Q_DISABLE_COPY(DescribeTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
