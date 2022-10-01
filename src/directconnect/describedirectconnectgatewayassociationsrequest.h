// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYASSOCIATIONSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewayAssociationsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewayAssociationsRequest : public DirectConnectRequest {

public:
    DescribeDirectConnectGatewayAssociationsRequest(const DescribeDirectConnectGatewayAssociationsRequest &other);
    DescribeDirectConnectGatewayAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewayAssociationsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
