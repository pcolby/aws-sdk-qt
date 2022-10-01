// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTCONFIGURATIONSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "describeexportconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportConfigurationsRequest;

class DescribeExportConfigurationsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DescribeExportConfigurationsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DescribeExportConfigurationsRequest * const q);
    DescribeExportConfigurationsRequestPrivate(const DescribeExportConfigurationsRequestPrivate &other,
                                   DescribeExportConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
