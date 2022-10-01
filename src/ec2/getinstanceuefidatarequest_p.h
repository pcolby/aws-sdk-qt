// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEUEFIDATAREQUEST_P_H
#define QTAWS_GETINSTANCEUEFIDATAREQUEST_P_H

#include "ec2request_p.h"
#include "getinstanceuefidatarequest.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceUefiDataRequest;

class GetInstanceUefiDataRequestPrivate : public Ec2RequestPrivate {

public:
    GetInstanceUefiDataRequestPrivate(const Ec2Request::Action action,
                                   GetInstanceUefiDataRequest * const q);
    GetInstanceUefiDataRequestPrivate(const GetInstanceUefiDataRequestPrivate &other,
                                   GetInstanceUefiDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceUefiDataRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
