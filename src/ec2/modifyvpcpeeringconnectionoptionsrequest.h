// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSREQUEST_H
#define QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcPeeringConnectionOptionsRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpcPeeringConnectionOptionsRequest : public Ec2Request {

public:
    ModifyVpcPeeringConnectionOptionsRequest(const ModifyVpcPeeringConnectionOptionsRequest &other);
    ModifyVpcPeeringConnectionOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcPeeringConnectionOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
