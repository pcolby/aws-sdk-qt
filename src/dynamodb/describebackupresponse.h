// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPRESPONSE_H
#define QTAWS_DESCRIBEBACKUPRESPONSE_H

#include "dynamodbresponse.h"
#include "describebackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeBackupResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeBackupResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeBackupResponse(const DescribeBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupResponse)
    Q_DISABLE_COPY(DescribeBackupResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
