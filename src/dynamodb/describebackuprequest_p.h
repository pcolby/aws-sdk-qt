/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEBACKUPREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describebackuprequest.h"

namespace QtAws {
namespace DynamoDB {

class DescribeBackupRequest;

class QTAWS_EXPORT DescribeBackupRequestPrivate : public DynamoDBRequestPrivate {

public:
    DescribeBackupRequestPrivate(const DynamoDB::Action action,
                                   DescribeBackupRequest * const q);
    DescribeBackupRequestPrivate(const DescribeBackupRequestPrivate &other,
                                   DescribeBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupRequest)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
