// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORSESSIONREQUEST_P_H
#define QTAWS_CREATETRAFFICMIRRORSESSIONREQUEST_P_H

#include "ec2request_p.h"
#include "createtrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorSessionRequest;

class CreateTrafficMirrorSessionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTrafficMirrorSessionRequestPrivate(const Ec2Request::Action action,
                                   CreateTrafficMirrorSessionRequest * const q);
    CreateTrafficMirrorSessionRequestPrivate(const CreateTrafficMirrorSessionRequestPrivate &other,
                                   CreateTrafficMirrorSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
