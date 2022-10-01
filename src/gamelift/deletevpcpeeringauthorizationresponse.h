// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETEVPCPEERINGAUTHORIZATIONRESPONSE_H

#include "gameliftresponse.h"
#include "deletevpcpeeringauthorizationrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringAuthorizationResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteVpcPeeringAuthorizationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteVpcPeeringAuthorizationResponse(const DeleteVpcPeeringAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcPeeringAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcPeeringAuthorizationResponse)
    Q_DISABLE_COPY(DeleteVpcPeeringAuthorizationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
