// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_H
#define QTAWS_CREATEVPCENDPOINTCONNECTIONNOTIFICATIONRESPONSE_H

#include "ec2response.h"
#include "createvpcendpointconnectionnotificationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointConnectionNotificationResponsePrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointConnectionNotificationResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpcEndpointConnectionNotificationResponse(const CreateVpcEndpointConnectionNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcEndpointConnectionNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointConnectionNotificationResponse)
    Q_DISABLE_COPY(CreateVpcEndpointConnectionNotificationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
