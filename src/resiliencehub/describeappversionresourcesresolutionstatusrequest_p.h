// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "describeappversionresourcesresolutionstatusrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionResourcesResolutionStatusRequest;

class DescribeAppVersionResourcesResolutionStatusRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DescribeAppVersionResourcesResolutionStatusRequestPrivate(const ResilienceHubRequest::Action action,
                                   DescribeAppVersionResourcesResolutionStatusRequest * const q);
    DescribeAppVersionResourcesResolutionStatusRequestPrivate(const DescribeAppVersionResourcesResolutionStatusRequestPrivate &other,
                                   DescribeAppVersionResourcesResolutionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppVersionResourcesResolutionStatusRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
