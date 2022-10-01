// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERNETGATEWAYRESPONSE_H
#define QTAWS_CREATEINTERNETGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInternetGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateInternetGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateInternetGatewayResponse(const CreateInternetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInternetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInternetGatewayResponse)
    Q_DISABLE_COPY(CreateInternetGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
