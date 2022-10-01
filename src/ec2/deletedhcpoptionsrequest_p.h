// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDHCPOPTIONSREQUEST_P_H
#define QTAWS_DELETEDHCPOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "deletedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteDhcpOptionsRequest;

class DeleteDhcpOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteDhcpOptionsRequestPrivate(const Ec2Request::Action action,
                                   DeleteDhcpOptionsRequest * const q);
    DeleteDhcpOptionsRequestPrivate(const DeleteDhcpOptionsRequestPrivate &other,
                                   DeleteDhcpOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDhcpOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
