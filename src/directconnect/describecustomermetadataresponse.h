// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERMETADATARESPONSE_H
#define QTAWS_DESCRIBECUSTOMERMETADATARESPONSE_H

#include "directconnectresponse.h"
#include "describecustomermetadatarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeCustomerMetadataResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeCustomerMetadataResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeCustomerMetadataResponse(const DescribeCustomerMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomerMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomerMetadataResponse)
    Q_DISABLE_COPY(DescribeCustomerMetadataResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
