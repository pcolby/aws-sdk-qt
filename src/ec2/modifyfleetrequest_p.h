// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFLEETREQUEST_P_H
#define QTAWS_MODIFYFLEETREQUEST_P_H

#include "ec2request_p.h"
#include "modifyfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyFleetRequest;

class ModifyFleetRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyFleetRequestPrivate(const Ec2Request::Action action,
                                   ModifyFleetRequest * const q);
    ModifyFleetRequestPrivate(const ModifyFleetRequestPrivate &other,
                                   ModifyFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
