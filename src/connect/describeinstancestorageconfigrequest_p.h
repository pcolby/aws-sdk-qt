// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTORAGECONFIGREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESTORAGECONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "describeinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceStorageConfigRequest;

class DescribeInstanceStorageConfigRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeInstanceStorageConfigRequestPrivate(const ConnectRequest::Action action,
                                   DescribeInstanceStorageConfigRequest * const q);
    DescribeInstanceStorageConfigRequestPrivate(const DescribeInstanceStorageConfigRequestPrivate &other,
                                   DescribeInstanceStorageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
