// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYADDRESSATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYADDRESSATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyaddressattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyAddressAttributeRequest;

class ModifyAddressAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyAddressAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyAddressAttributeRequest * const q);
    ModifyAddressAttributeRequestPrivate(const ModifyAddressAttributeRequestPrivate &other,
                                   ModifyAddressAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyAddressAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
