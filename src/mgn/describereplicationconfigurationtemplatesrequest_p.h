// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_P_H

#include "mgnrequest_p.h"
#include "describereplicationconfigurationtemplatesrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeReplicationConfigurationTemplatesRequest;

class DescribeReplicationConfigurationTemplatesRequestPrivate : public MgnRequestPrivate {

public:
    DescribeReplicationConfigurationTemplatesRequestPrivate(const MgnRequest::Action action,
                                   DescribeReplicationConfigurationTemplatesRequest * const q);
    DescribeReplicationConfigurationTemplatesRequestPrivate(const DescribeReplicationConfigurationTemplatesRequestPrivate &other,
                                   DescribeReplicationConfigurationTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationTemplatesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
