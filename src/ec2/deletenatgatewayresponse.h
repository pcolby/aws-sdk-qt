// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENATGATEWAYRESPONSE_H
#define QTAWS_DELETENATGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deletenatgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNatGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteNatGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNatGatewayResponse(const DeleteNatGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNatGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNatGatewayResponse)
    Q_DISABLE_COPY(DeleteNatGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
