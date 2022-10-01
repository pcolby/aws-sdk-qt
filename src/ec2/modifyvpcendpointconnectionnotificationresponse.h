// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_H
#define QTAWS_MODIFYVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_H

#include "ec2response.h"
#include "modifyvpcendpointconnectionnotificationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointConnectionNotificationResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointConnectionNotificationResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcEndpointConnectionNotificationResponse(const ModifyVpcEndpointConnectionNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcEndpointConnectionNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointConnectionNotificationResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointConnectionNotificationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
