// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERMETADATAREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMERMETADATAREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describecustomermetadatarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeCustomerMetadataRequest;

class DescribeCustomerMetadataRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeCustomerMetadataRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeCustomerMetadataRequest * const q);
    DescribeCustomerMetadataRequestPrivate(const DescribeCustomerMetadataRequestPrivate &other,
                                   DescribeCustomerMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomerMetadataRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
