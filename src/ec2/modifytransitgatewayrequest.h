// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYREQUEST_H
#define QTAWS_MODIFYTRANSITGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayRequestPrivate;

class QTAWSEC2_EXPORT ModifyTransitGatewayRequest : public Ec2Request {

public:
    ModifyTransitGatewayRequest(const ModifyTransitGatewayRequest &other);
    ModifyTransitGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
