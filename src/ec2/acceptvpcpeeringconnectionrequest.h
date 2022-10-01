// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCPEERINGCONNECTIONREQUEST_H
#define QTAWS_ACCEPTVPCPEERINGCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcPeeringConnectionRequestPrivate;

class QTAWSEC2_EXPORT AcceptVpcPeeringConnectionRequest : public Ec2Request {

public:
    AcceptVpcPeeringConnectionRequest(const AcceptVpcPeeringConnectionRequest &other);
    AcceptVpcPeeringConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
