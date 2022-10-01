// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMERGATEWAYRESPONSE_H
#define QTAWS_DELETECUSTOMERGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deletecustomergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCustomerGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteCustomerGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteCustomerGatewayResponse(const DeleteCustomerGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomerGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomerGatewayResponse)
    Q_DISABLE_COPY(DeleteCustomerGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
