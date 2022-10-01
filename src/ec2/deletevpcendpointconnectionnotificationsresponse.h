// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_H
#define QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_H

#include "ec2response.h"
#include "deletevpcendpointconnectionnotificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointConnectionNotificationsResponsePrivate;

class QTAWSEC2_EXPORT DeleteVpcEndpointConnectionNotificationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteVpcEndpointConnectionNotificationsResponse(const DeleteVpcEndpointConnectionNotificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcEndpointConnectionNotificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcEndpointConnectionNotificationsResponse)
    Q_DISABLE_COPY(DeleteVpcEndpointConnectionNotificationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
