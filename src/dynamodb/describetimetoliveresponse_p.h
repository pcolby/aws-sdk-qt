// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMETOLIVERESPONSE_P_H
#define QTAWS_DESCRIBETIMETOLIVERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTimeToLiveResponse;

class DescribeTimeToLiveResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeTimeToLiveResponsePrivate(DescribeTimeToLiveResponse * const q);

    void parseDescribeTimeToLiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTimeToLiveResponse)
    Q_DISABLE_COPY(DescribeTimeToLiveResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
