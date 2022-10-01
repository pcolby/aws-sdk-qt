// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUNKINTERFACEREQUEST_P_H
#define QTAWS_ASSOCIATETRUNKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "associatetrunkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTrunkInterfaceRequest;

class AssociateTrunkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateTrunkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   AssociateTrunkInterfaceRequest * const q);
    AssociateTrunkInterfaceRequestPrivate(const AssociateTrunkInterfaceRequestPrivate &other,
                                   AssociateTrunkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTrunkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
