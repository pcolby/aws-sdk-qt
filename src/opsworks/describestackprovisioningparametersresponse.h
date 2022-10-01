// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBESTACKPROVISIONINGPARAMETERSRESPONSE_H

#include "opsworksresponse.h"
#include "describestackprovisioningparametersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackProvisioningParametersResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeStackProvisioningParametersResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeStackProvisioningParametersResponse(const DescribeStackProvisioningParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStackProvisioningParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackProvisioningParametersResponse)
    Q_DISABLE_COPY(DescribeStackProvisioningParametersResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
