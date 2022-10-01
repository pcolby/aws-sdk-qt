// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORSESSIONREQUEST_P_H
#define QTAWS_DELETETRAFFICMIRRORSESSIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletetrafficmirrorsessionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorSessionRequest;

class DeleteTrafficMirrorSessionRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTrafficMirrorSessionRequestPrivate(const Ec2Request::Action action,
                                   DeleteTrafficMirrorSessionRequest * const q);
    DeleteTrafficMirrorSessionRequestPrivate(const DeleteTrafficMirrorSessionRequestPrivate &other,
                                   DeleteTrafficMirrorSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorSessionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
