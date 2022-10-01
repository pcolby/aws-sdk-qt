// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYINFORMATIONREQUEST_P_H
#define QTAWS_DESCRIBEGATEWAYINFORMATIONREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describegatewayinformationrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeGatewayInformationRequest;

class DescribeGatewayInformationRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeGatewayInformationRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeGatewayInformationRequest * const q);
    DescribeGatewayInformationRequestPrivate(const DescribeGatewayInformationRequestPrivate &other,
                                   DescribeGatewayInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayInformationRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
