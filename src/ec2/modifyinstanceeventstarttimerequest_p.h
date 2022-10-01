// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTSTARTTIMEREQUEST_P_H
#define QTAWS_MODIFYINSTANCEEVENTSTARTTIMEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstanceeventstarttimerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventStartTimeRequest;

class ModifyInstanceEventStartTimeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceEventStartTimeRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceEventStartTimeRequest * const q);
    ModifyInstanceEventStartTimeRequestPrivate(const ModifyInstanceEventStartTimeRequestPrivate &other,
                                   ModifyInstanceEventStartTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceEventStartTimeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
