// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPSREQUEST_P_H
#define QTAWS_DESCRIBEAPPSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeappsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAppsRequest;

class DescribeAppsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeAppsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeAppsRequest * const q);
    DescribeAppsRequestPrivate(const DescribeAppsRequestPrivate &other,
                                   DescribeAppsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
