// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENATGATEWAYREQUEST_H
#define QTAWS_DELETENATGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNatGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteNatGatewayRequest : public Ec2Request {

public:
    DeleteNatGatewayRequest(const DeleteNatGatewayRequest &other);
    DeleteNatGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNatGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
