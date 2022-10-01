// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORTARGETREQUEST_P_H
#define QTAWS_CREATETRAFFICMIRRORTARGETREQUEST_P_H

#include "ec2request_p.h"
#include "createtrafficmirrortargetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorTargetRequest;

class CreateTrafficMirrorTargetRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTrafficMirrorTargetRequestPrivate(const Ec2Request::Action action,
                                   CreateTrafficMirrorTargetRequest * const q);
    CreateTrafficMirrorTargetRequestPrivate(const CreateTrafficMirrorTargetRequestPrivate &other,
                                   CreateTrafficMirrorTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorTargetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
