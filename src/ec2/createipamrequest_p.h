// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMREQUEST_P_H
#define QTAWS_CREATEIPAMREQUEST_P_H

#include "ec2request_p.h"
#include "createipamrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamRequest;

class CreateIpamRequestPrivate : public Ec2RequestPrivate {

public:
    CreateIpamRequestPrivate(const Ec2Request::Action action,
                                   CreateIpamRequest * const q);
    CreateIpamRequestPrivate(const CreateIpamRequestPrivate &other,
                                   CreateIpamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
