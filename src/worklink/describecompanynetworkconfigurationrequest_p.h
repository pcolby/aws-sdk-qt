// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describecompanynetworkconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeCompanyNetworkConfigurationRequest;

class DescribeCompanyNetworkConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeCompanyNetworkConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeCompanyNetworkConfigurationRequest * const q);
    DescribeCompanyNetworkConfigurationRequestPrivate(const DescribeCompanyNetworkConfigurationRequestPrivate &other,
                                   DescribeCompanyNetworkConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCompanyNetworkConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
