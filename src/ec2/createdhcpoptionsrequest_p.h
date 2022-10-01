// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDHCPOPTIONSREQUEST_P_H
#define QTAWS_CREATEDHCPOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "createdhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDhcpOptionsRequest;

class CreateDhcpOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    CreateDhcpOptionsRequestPrivate(const Ec2Request::Action action,
                                   CreateDhcpOptionsRequest * const q);
    CreateDhcpOptionsRequestPrivate(const CreateDhcpOptionsRequestPrivate &other,
                                   CreateDhcpOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
