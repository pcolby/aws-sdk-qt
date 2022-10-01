// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUNKINTERFACEREQUEST_P_H
#define QTAWS_DISASSOCIATETRUNKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatetrunkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTrunkInterfaceRequest;

class DisassociateTrunkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateTrunkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   DisassociateTrunkInterfaceRequest * const q);
    DisassociateTrunkInterfaceRequestPrivate(const DisassociateTrunkInterfaceRequestPrivate &other,
                                   DisassociateTrunkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTrunkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
