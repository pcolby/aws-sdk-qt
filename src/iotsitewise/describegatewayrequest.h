// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYREQUEST_H
#define QTAWS_DESCRIBEGATEWAYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeGatewayRequest : public IoTSiteWiseRequest {

public:
    DescribeGatewayRequest(const DescribeGatewayRequest &other);
    DescribeGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
