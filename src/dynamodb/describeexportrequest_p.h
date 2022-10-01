// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeexportrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeExportRequest;

class DescribeExportRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeExportRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeExportRequest * const q);
    DescribeExportRequestPrivate(const DescribeExportRequestPrivate &other,
                                   DescribeExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
