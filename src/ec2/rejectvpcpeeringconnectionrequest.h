// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCPEERINGCONNECTIONREQUEST_H
#define QTAWS_REJECTVPCPEERINGCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcPeeringConnectionRequestPrivate;

class QTAWSEC2_EXPORT RejectVpcPeeringConnectionRequest : public Ec2Request {

public:
    RejectVpcPeeringConnectionRequest(const RejectVpcPeeringConnectionRequest &other);
    RejectVpcPeeringConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
