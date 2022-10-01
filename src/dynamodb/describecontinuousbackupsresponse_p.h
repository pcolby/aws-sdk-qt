// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSBACKUPSRESPONSE_P_H
#define QTAWS_DESCRIBECONTINUOUSBACKUPSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContinuousBackupsResponse;

class DescribeContinuousBackupsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeContinuousBackupsResponsePrivate(DescribeContinuousBackupsResponse * const q);

    void parseDescribeContinuousBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContinuousBackupsResponse)
    Q_DISABLE_COPY(DescribeContinuousBackupsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
