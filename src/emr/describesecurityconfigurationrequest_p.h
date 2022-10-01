// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBESECURITYCONFIGURATIONREQUEST_P_H

#include "emrrequest_p.h"
#include "describesecurityconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class DescribeSecurityConfigurationRequest;

class DescribeSecurityConfigurationRequestPrivate : public EmrRequestPrivate {

public:
    DescribeSecurityConfigurationRequestPrivate(const EmrRequest::Action action,
                                   DescribeSecurityConfigurationRequest * const q);
    DescribeSecurityConfigurationRequestPrivate(const DescribeSecurityConfigurationRequestPrivate &other,
                                   DescribeSecurityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
