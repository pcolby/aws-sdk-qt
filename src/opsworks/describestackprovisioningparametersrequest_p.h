// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describestackprovisioningparametersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackProvisioningParametersRequest;

class DescribeStackProvisioningParametersRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeStackProvisioningParametersRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeStackProvisioningParametersRequest * const q);
    DescribeStackProvisioningParametersRequestPrivate(const DescribeStackProvisioningParametersRequestPrivate &other,
                                   DescribeStackProvisioningParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackProvisioningParametersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
