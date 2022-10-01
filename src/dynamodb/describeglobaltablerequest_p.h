// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLEREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALTABLEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeglobaltablerequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableRequest;

class DescribeGlobalTableRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeGlobalTableRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeGlobalTableRequest * const q);
    DescribeGlobalTableRequestPrivate(const DescribeGlobalTableRequestPrivate &other,
                                   DescribeGlobalTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
