// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYINSTANCEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstanceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceAttributeRequest;

class ModifyInstanceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceAttributeRequest * const q);
    ModifyInstanceAttributeRequestPrivate(const ModifyInstanceAttributeRequestPrivate &other,
                                   ModifyInstanceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
