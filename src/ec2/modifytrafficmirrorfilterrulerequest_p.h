// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERRULEREQUEST_P_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERRULEREQUEST_P_H

#include "ec2request_p.h"
#include "modifytrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterRuleRequest;

class ModifyTrafficMirrorFilterRuleRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTrafficMirrorFilterRuleRequestPrivate(const Ec2Request::Action action,
                                   ModifyTrafficMirrorFilterRuleRequest * const q);
    ModifyTrafficMirrorFilterRuleRequestPrivate(const ModifyTrafficMirrorFilterRuleRequestPrivate &other,
                                   ModifyTrafficMirrorFilterRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
