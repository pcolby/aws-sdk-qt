// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSTATEREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONSTATEREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "describeapplicationstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeApplicationStateRequest;

class DescribeApplicationStateRequestPrivate : public MigrationHubRequestPrivate {

public:
    DescribeApplicationStateRequestPrivate(const MigrationHubRequest::Action action,
                                   DescribeApplicationStateRequest * const q);
    DescribeApplicationStateRequestPrivate(const DescribeApplicationStateRequestPrivate &other,
                                   DescribeApplicationStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
