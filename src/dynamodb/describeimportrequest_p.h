// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTREQUEST_P_H
#define QTAWS_DESCRIBEIMPORTREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeimportrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeImportRequest;

class DescribeImportRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeImportRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeImportRequest * const q);
    DescribeImportRequestPrivate(const DescribeImportRequestPrivate &other,
                                   DescribeImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImportRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
