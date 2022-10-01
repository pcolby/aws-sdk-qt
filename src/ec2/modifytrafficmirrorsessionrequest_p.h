// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORSESSIONREQUEST_P_H
#define QTAWS_MODIFYTRAFFICMIRRORSESSIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifytrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorSessionRequest;

class ModifyTrafficMirrorSessionRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTrafficMirrorSessionRequestPrivate(const Ec2Request::Action action,
                                   ModifyTrafficMirrorSessionRequest * const q);
    ModifyTrafficMirrorSessionRequestPrivate(const ModifyTrafficMirrorSessionRequestPrivate &other,
                                   ModifyTrafficMirrorSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
