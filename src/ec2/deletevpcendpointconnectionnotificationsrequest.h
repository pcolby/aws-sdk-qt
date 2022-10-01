// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_H
#define QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointConnectionNotificationsRequestPrivate;

class QTAWSEC2_EXPORT DeleteVpcEndpointConnectionNotificationsRequest : public Ec2Request {

public:
    DeleteVpcEndpointConnectionNotificationsRequest(const DeleteVpcEndpointConnectionNotificationsRequest &other);
    DeleteVpcEndpointConnectionNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcEndpointConnectionNotificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
