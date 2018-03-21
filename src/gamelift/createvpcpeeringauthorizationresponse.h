/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_H
#define QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_H

#include "gameliftresponse.h"
#include "createvpcpeeringauthorizationrequest.h"

namespace AWS {

namespace gamelift {

class CreateVpcPeeringAuthorizationResponsePrivate;

class QTAWS_EXPORT CreateVpcPeeringAuthorizationResponse : public CreateVpcPeeringAuthorizationResponse {
    Q_OBJECT

public:
    CreateVpcPeeringAuthorizationResponse(const CreateVpcPeeringAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcPeeringAuthorizationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateVpcPeeringAuthorizationResponse)
    Q_DISABLE_COPY(CreateVpcPeeringAuthorizationResponse)

};

} // namespace gamelift
} // namespace AWS

#endif
