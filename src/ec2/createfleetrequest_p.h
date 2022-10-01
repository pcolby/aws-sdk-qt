// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETREQUEST_P_H
#define QTAWS_CREATEFLEETREQUEST_P_H

#include "ec2request_p.h"
#include "createfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateFleetRequest;

class CreateFleetRequestPrivate : public Ec2RequestPrivate {

public:
    CreateFleetRequestPrivate(const Ec2Request::Action action,
                                   CreateFleetRequest * const q);
    CreateFleetRequestPrivate(const CreateFleetRequestPrivate &other,
                                   CreateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
