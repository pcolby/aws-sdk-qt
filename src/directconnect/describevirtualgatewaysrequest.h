// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYSREQUEST_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualGatewaysRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeVirtualGatewaysRequest : public DirectConnectRequest {

public:
    DescribeVirtualGatewaysRequest(const DescribeVirtualGatewaysRequest &other);
    DescribeVirtualGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualGatewaysRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
