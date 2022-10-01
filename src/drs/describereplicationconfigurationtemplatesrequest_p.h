// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_P_H

#include "drsrequest_p.h"
#include "describereplicationconfigurationtemplatesrequest.h"

namespace QtAws {
namespace Drs {

class DescribeReplicationConfigurationTemplatesRequest;

class DescribeReplicationConfigurationTemplatesRequestPrivate : public DrsRequestPrivate {

public:
    DescribeReplicationConfigurationTemplatesRequestPrivate(const DrsRequest::Action action,
                                   DescribeReplicationConfigurationTemplatesRequest * const q);
    DescribeReplicationConfigurationTemplatesRequestPrivate(const DescribeReplicationConfigurationTemplatesRequestPrivate &other,
                                   DescribeReplicationConfigurationTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationConfigurationTemplatesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
