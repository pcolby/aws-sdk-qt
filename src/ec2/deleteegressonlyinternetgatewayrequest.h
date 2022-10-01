// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEGRESSONLYINTERNETGATEWAYREQUEST_H
#define QTAWS_DELETEEGRESSONLYINTERNETGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteEgressOnlyInternetGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteEgressOnlyInternetGatewayRequest : public Ec2Request {

public:
    DeleteEgressOnlyInternetGatewayRequest(const DeleteEgressOnlyInternetGatewayRequest &other);
    DeleteEgressOnlyInternetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEgressOnlyInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
