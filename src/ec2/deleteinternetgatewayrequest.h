// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERNETGATEWAYREQUEST_H
#define QTAWS_DELETEINTERNETGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteInternetGatewayRequestPrivate;

class QTAWSEC2_EXPORT DeleteInternetGatewayRequest : public Ec2Request {

public:
    DeleteInternetGatewayRequest(const DeleteInternetGatewayRequest &other);
    DeleteInternetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
