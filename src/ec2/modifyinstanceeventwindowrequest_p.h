// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTWINDOWREQUEST_P_H
#define QTAWS_MODIFYINSTANCEEVENTWINDOWREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventWindowRequest;

class ModifyInstanceEventWindowRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceEventWindowRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceEventWindowRequest * const q);
    ModifyInstanceEventWindowRequestPrivate(const ModifyInstanceEventWindowRequestPrivate &other,
                                   ModifyInstanceEventWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
