// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMENTREQUEST_P_H
#define QTAWS_DESCRIBESTATEMENTREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "describestatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class DescribeStatementRequest;

class DescribeStatementRequestPrivate : public RedshiftDataRequestPrivate {

public:
    DescribeStatementRequestPrivate(const RedshiftDataRequest::Action action,
                                   DescribeStatementRequest * const q);
    DescribeStatementRequestPrivate(const DescribeStatementRequestPrivate &other,
                                   DescribeStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStatementRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
