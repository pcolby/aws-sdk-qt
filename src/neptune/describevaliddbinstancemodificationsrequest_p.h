// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describevaliddbinstancemodificationsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeValidDBInstanceModificationsRequest;

class DescribeValidDBInstanceModificationsRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeValidDBInstanceModificationsRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeValidDBInstanceModificationsRequest * const q);
    DescribeValidDBInstanceModificationsRequestPrivate(const DescribeValidDBInstanceModificationsRequestPrivate &other,
                                   DescribeValidDBInstanceModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeValidDBInstanceModificationsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
