// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_H

#include "gameliftresponse.h"
#include "createvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace GameLift {

class CreateVpcPeeringConnectionResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateVpcPeeringConnectionResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateVpcPeeringConnectionResponse(const CreateVpcPeeringConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcPeeringConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(CreateVpcPeeringConnectionResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
