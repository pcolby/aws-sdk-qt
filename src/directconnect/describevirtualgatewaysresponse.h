// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYSRESPONSE_H

#include "directconnectresponse.h"
#include "describevirtualgatewaysrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualGatewaysResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeVirtualGatewaysResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeVirtualGatewaysResponse(const DescribeVirtualGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualGatewaysResponse)
    Q_DISABLE_COPY(DescribeVirtualGatewaysResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
