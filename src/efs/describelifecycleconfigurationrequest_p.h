// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLECONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBELIFECYCLECONFIGURATIONREQUEST_P_H

#include "efsrequest_p.h"
#include "describelifecycleconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class DescribeLifecycleConfigurationRequest;

class DescribeLifecycleConfigurationRequestPrivate : public EfsRequestPrivate {

public:
    DescribeLifecycleConfigurationRequestPrivate(const EfsRequest::Action action,
                                   DescribeLifecycleConfigurationRequest * const q);
    DescribeLifecycleConfigurationRequestPrivate(const DescribeLifecycleConfigurationRequestPrivate &other,
                                   DescribeLifecycleConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
