// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERNETGATEWAYREQUEST_H
#define QTAWS_CREATEINTERNETGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateInternetGatewayRequestPrivate;

class QTAWSEC2_EXPORT CreateInternetGatewayRequest : public Ec2Request {

public:
    CreateInternetGatewayRequest(const CreateInternetGatewayRequest &other);
    CreateInternetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
