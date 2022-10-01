// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYVPCATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcAttributeRequest;

class ModifyVpcAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcAttributeRequest * const q);
    ModifyVpcAttributeRequestPrivate(const ModifyVpcAttributeRequestPrivate &other,
                                   ModifyVpcAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
