// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackProvisioningParametersResponse;

class DescribeStackProvisioningParametersResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeStackProvisioningParametersResponsePrivate(DescribeStackProvisioningParametersResponse * const q);

    void parseDescribeStackProvisioningParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackProvisioningParametersResponse)
    Q_DISABLE_COPY(DescribeStackProvisioningParametersResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
