// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWREQUEST_P_H
#define QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWREQUEST_P_H

#include "ec2request_p.h"
#include "disassociateinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateInstanceEventWindowRequest;

class DisassociateInstanceEventWindowRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateInstanceEventWindowRequestPrivate(const Ec2Request::Action action,
                                   DisassociateInstanceEventWindowRequest * const q);
    DisassociateInstanceEventWindowRequestPrivate(const DisassociateInstanceEventWindowRequestPrivate &other,
                                   DisassociateInstanceEventWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
