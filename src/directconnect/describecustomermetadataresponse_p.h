// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERMETADATARESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMERMETADATARESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeCustomerMetadataResponse;

class DescribeCustomerMetadataResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeCustomerMetadataResponsePrivate(DescribeCustomerMetadataResponse * const q);

    void parseDescribeCustomerMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomerMetadataResponse)
    Q_DISABLE_COPY(DescribeCustomerMetadataResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
