// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEGRESSONLYINTERNETGATEWAYRESPONSE_H
#define QTAWS_CREATEEGRESSONLYINTERNETGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createegressonlyinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateEgressOnlyInternetGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateEgressOnlyInternetGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateEgressOnlyInternetGatewayResponse(const CreateEgressOnlyInternetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEgressOnlyInternetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEgressOnlyInternetGatewayResponse)
    Q_DISABLE_COPY(CreateEgressOnlyInternetGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
