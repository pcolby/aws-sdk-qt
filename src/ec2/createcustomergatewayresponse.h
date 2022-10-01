// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMERGATEWAYRESPONSE_H
#define QTAWS_CREATECUSTOMERGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createcustomergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCustomerGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateCustomerGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCustomerGatewayResponse(const CreateCustomerGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomerGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomerGatewayResponse)
    Q_DISABLE_COPY(CreateCustomerGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
