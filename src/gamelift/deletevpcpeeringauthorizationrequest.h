// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGAUTHORIZATIONREQUEST_H
#define QTAWS_DELETEVPCPEERINGAUTHORIZATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringAuthorizationRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteVpcPeeringAuthorizationRequest : public GameLiftRequest {

public:
    DeleteVpcPeeringAuthorizationRequest(const DeleteVpcPeeringAuthorizationRequest &other);
    DeleteVpcPeeringAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcPeeringAuthorizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
