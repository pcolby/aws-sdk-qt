// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORTARGETREQUEST_P_H
#define QTAWS_DELETETRAFFICMIRRORTARGETREQUEST_P_H

#include "ec2request_p.h"
#include "deletetrafficmirrortargetrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorTargetRequest;

class DeleteTrafficMirrorTargetRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTrafficMirrorTargetRequestPrivate(const Ec2Request::Action action,
                                   DeleteTrafficMirrorTargetRequest * const q);
    DeleteTrafficMirrorTargetRequestPrivate(const DeleteTrafficMirrorTargetRequestPrivate &other,
                                   DeleteTrafficMirrorTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorTargetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
