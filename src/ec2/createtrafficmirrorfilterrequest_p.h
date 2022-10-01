// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERREQUEST_P_H
#define QTAWS_CREATETRAFFICMIRRORFILTERREQUEST_P_H

#include "ec2request_p.h"
#include "createtrafficmirrorfilterrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterRequest;

class CreateTrafficMirrorFilterRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTrafficMirrorFilterRequestPrivate(const Ec2Request::Action action,
                                   CreateTrafficMirrorFilterRequest * const q);
    CreateTrafficMirrorFilterRequestPrivate(const CreateTrafficMirrorFilterRequestPrivate &other,
                                   CreateTrafficMirrorFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficMirrorFilterRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
