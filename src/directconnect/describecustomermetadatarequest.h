// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERMETADATAREQUEST_H
#define QTAWS_DESCRIBECUSTOMERMETADATAREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeCustomerMetadataRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeCustomerMetadataRequest : public DirectConnectRequest {

public:
    DescribeCustomerMetadataRequest(const DescribeCustomerMetadataRequest &other);
    DescribeCustomerMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomerMetadataRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
