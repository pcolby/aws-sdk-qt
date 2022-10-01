// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_P_H
#define QTAWS_DELETEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointConnectionNotificationsResponse;

class DeleteVpcEndpointConnectionNotificationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpcEndpointConnectionNotificationsResponsePrivate(DeleteVpcEndpointConnectionNotificationsResponse * const q);

    void parseDeleteVpcEndpointConnectionNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointConnectionNotificationsResponse)
    Q_DISABLE_COPY(DeleteVpcEndpointConnectionNotificationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
