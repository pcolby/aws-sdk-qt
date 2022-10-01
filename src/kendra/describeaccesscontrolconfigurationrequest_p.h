// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONREQUEST_P_H

#include "kendrarequest_p.h"
#include "describeaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeAccessControlConfigurationRequest;

class DescribeAccessControlConfigurationRequestPrivate : public KendraRequestPrivate {

public:
    DescribeAccessControlConfigurationRequestPrivate(const KendraRequest::Action action,
                                   DescribeAccessControlConfigurationRequest * const q);
    DescribeAccessControlConfigurationRequestPrivate(const DescribeAccessControlConfigurationRequestPrivate &other,
                                   DescribeAccessControlConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
