// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_H
#define QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointConnectionNotificationRequestPrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointConnectionNotificationRequest : public Ec2Request {

public:
    CreateVpcEndpointConnectionNotificationRequest(const CreateVpcEndpointConnectionNotificationRequest &other);
    CreateVpcEndpointConnectionNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointConnectionNotificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
