// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYINFORMATIONRESPONSE_H
#define QTAWS_DESCRIBEGATEWAYINFORMATIONRESPONSE_H

#include "storagegatewayresponse.h"
#include "describegatewayinformationrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeGatewayInformationResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeGatewayInformationResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeGatewayInformationResponse(const DescribeGatewayInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGatewayInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayInformationResponse)
    Q_DISABLE_COPY(DescribeGatewayInformationResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
