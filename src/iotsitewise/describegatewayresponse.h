// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYRESPONSE_H
#define QTAWS_DESCRIBEGATEWAYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describegatewayrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeGatewayResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeGatewayResponse(const DescribeGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayResponse)
    Q_DISABLE_COPY(DescribeGatewayResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
