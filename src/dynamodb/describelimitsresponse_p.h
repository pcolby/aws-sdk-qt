// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBELIMITSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeLimitsResponse;

class DescribeLimitsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeLimitsResponsePrivate(DescribeLimitsResponse * const q);

    void parseDescribeLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLimitsResponse)
    Q_DISABLE_COPY(DescribeLimitsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
