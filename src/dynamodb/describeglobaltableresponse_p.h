// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLERESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALTABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableResponse;

class DescribeGlobalTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeGlobalTableResponsePrivate(DescribeGlobalTableResponse * const q);

    void parseDescribeGlobalTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalTableResponse)
    Q_DISABLE_COPY(DescribeGlobalTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
