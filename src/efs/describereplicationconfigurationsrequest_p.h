// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSREQUEST_P_H

#include "efsrequest_p.h"
#include "describereplicationconfigurationsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeReplicationConfigurationsRequest;

class DescribeReplicationConfigurationsRequestPrivate : public EfsRequestPrivate {

public:
    DescribeReplicationConfigurationsRequestPrivate(const EfsRequest::Action action,
                                   DescribeReplicationConfigurationsRequest * const q);
    DescribeReplicationConfigurationsRequestPrivate(const DescribeReplicationConfigurationsRequestPrivate &other,
                                   DescribeReplicationConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
