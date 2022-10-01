// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSREQUEST_H
#define QTAWS_DESCRIBEDIRECTCONNECTGATEWAYSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeDirectConnectGatewaysRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeDirectConnectGatewaysRequest : public DirectConnectRequest {

public:
    DescribeDirectConnectGatewaysRequest(const DescribeDirectConnectGatewaysRequest &other);
    DescribeDirectConnectGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectConnectGatewaysRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
