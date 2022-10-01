// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringConnectionRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteVpcPeeringConnectionRequest : public GameLiftRequest {

public:
    DeleteVpcPeeringConnectionRequest(const DeleteVpcPeeringConnectionRequest &other);
    DeleteVpcPeeringConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcPeeringConnectionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
