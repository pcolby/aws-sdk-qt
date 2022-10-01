// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECARRIERGATEWAYREQUEST_H
#define QTAWS_DELETECARRIERGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteCarrierGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteCarrierGatewayRequest : public Ec2Request {

public:
    DeleteCarrierGatewayRequest(const DeleteCarrierGatewayRequest &other);
    DeleteCarrierGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCarrierGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
