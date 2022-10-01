// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_H
#define QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_H

#include "gameliftresponse.h"
#include "createvpcpeeringauthorizationrequest.h"

namespace QtAws {
namespace GameLift {

class CreateVpcPeeringAuthorizationResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateVpcPeeringAuthorizationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateVpcPeeringAuthorizationResponse(const CreateVpcPeeringAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcPeeringAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcPeeringAuthorizationResponse)
    Q_DISABLE_COPY(CreateVpcPeeringAuthorizationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
