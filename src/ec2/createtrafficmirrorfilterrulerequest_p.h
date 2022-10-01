// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRULEREQUEST_P_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRULEREQUEST_P_H

#include "ec2request_p.h"
#include "createtrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRuleRequest;

class CreateTrafficMirrorFilterRuleRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTrafficMirrorFilterRuleRequestPrivate(const Ec2Request::Action action,
                                   CreateTrafficMirrorFilterRuleRequest * const q);
    CreateTrafficMirrorFilterRuleRequestPrivate(const CreateTrafficMirrorFilterRuleRequestPrivate &other,
                                   CreateTrafficMirrorFilterRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
