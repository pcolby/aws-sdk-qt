// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERREQUEST_P_H
#define QTAWS_DELETETRAFFICMIRRORFILTERREQUEST_P_H

#include "ec2request_p.h"
#include "deletetrafficmirrorfilterrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterRequest;

class DeleteTrafficMirrorFilterRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTrafficMirrorFilterRequestPrivate(const Ec2Request::Action action,
                                   DeleteTrafficMirrorFilterRequest * const q);
    DeleteTrafficMirrorFilterRequestPrivate(const DeleteTrafficMirrorFilterRequestPrivate &other,
                                   DeleteTrafficMirrorFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficMirrorFilterRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
