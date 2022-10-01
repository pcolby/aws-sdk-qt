// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREQUEST_P_H
#define QTAWS_DESCRIBETABLEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describetablerequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTableRequest;

class DescribeTableRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeTableRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeTableRequest * const q);
    DescribeTableRequestPrivate(const DescribeTableRequestPrivate &other,
                                   DescribeTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
