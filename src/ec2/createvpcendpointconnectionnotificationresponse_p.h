// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_P_H
#define QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointConnectionNotificationResponse;

class CreateVpcEndpointConnectionNotificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpcEndpointConnectionNotificationResponsePrivate(CreateVpcEndpointConnectionNotificationResponse * const q);

    void parseCreateVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointConnectionNotificationResponse)
    Q_DISABLE_COPY(CreateVpcEndpointConnectionNotificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
