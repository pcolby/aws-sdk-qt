// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeBackupResponse;

class DescribeBackupResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeBackupResponsePrivate(DescribeBackupResponse * const q);

    void parseDescribeBackupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupResponse)
    Q_DISABLE_COPY(DescribeBackupResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
