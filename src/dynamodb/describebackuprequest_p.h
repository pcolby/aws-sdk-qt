// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describebackuprequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeBackupRequest;

class DescribeBackupRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeBackupRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeBackupRequest * const q);
    DescribeBackupRequestPrivate(const DescribeBackupRequestPrivate &other,
                                   DescribeBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
