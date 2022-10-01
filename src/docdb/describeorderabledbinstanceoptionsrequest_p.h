// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describeorderabledbinstanceoptionsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeOrderableDBInstanceOptionsRequest;

class DescribeOrderableDBInstanceOptionsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeOrderableDBInstanceOptionsRequestPrivate(const DocDbRequest::Action action,
                                   DescribeOrderableDBInstanceOptionsRequest * const q);
    DescribeOrderableDBInstanceOptionsRequestPrivate(const DescribeOrderableDBInstanceOptionsRequestPrivate &other,
                                   DescribeOrderableDBInstanceOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableDBInstanceOptionsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
