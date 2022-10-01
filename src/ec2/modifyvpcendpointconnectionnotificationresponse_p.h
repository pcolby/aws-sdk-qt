// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_P_H
#define QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointConnectionNotificationResponse;

class ModifyVpcEndpointConnectionNotificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcEndpointConnectionNotificationResponsePrivate(ModifyVpcEndpointConnectionNotificationResponse * const q);

    void parseModifyVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcEndpointConnectionNotificationResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointConnectionNotificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
