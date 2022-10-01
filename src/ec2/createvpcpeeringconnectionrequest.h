// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcPeeringConnectionRequestPrivate;

class QTAWSEC2_EXPORT CreateVpcPeeringConnectionRequest : public Ec2Request {

public:
    CreateVpcPeeringConnectionRequest(const CreateVpcPeeringConnectionRequest &other);
    CreateVpcPeeringConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcPeeringConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
