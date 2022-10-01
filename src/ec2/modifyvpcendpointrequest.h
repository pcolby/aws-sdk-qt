// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTREQUEST_H
#define QTAWS_MODIFYVPCENDPOINTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointRequest : public Ec2Request {

public:
    ModifyVpcEndpointRequest(const ModifyVpcEndpointRequest &other);
    ModifyVpcEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
