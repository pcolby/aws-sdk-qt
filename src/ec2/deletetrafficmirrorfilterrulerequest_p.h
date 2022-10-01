// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRULEREQUEST_P_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRULEREQUEST_P_H

#include "ec2request_p.h"
#include "deletetrafficmirrorfilterrulerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRuleRequest;

class DeleteTrafficMirrorFilterRuleRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTrafficMirrorFilterRuleRequestPrivate(const Ec2Request::Action action,
                                   DeleteTrafficMirrorFilterRuleRequest * const q);
    DeleteTrafficMirrorFilterRuleRequestPrivate(const DeleteTrafficMirrorFilterRuleRequestPrivate &other,
                                   DeleteTrafficMirrorFilterRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorFilterRuleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
