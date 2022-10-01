// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYINFORMATIONREQUEST_H
#define QTAWS_DESCRIBEGATEWAYINFORMATIONREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeGatewayInformationRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeGatewayInformationRequest : public StorageGatewayRequest {

public:
    DescribeGatewayInformationRequest(const DescribeGatewayInformationRequest &other);
    DescribeGatewayInformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayInformationRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
