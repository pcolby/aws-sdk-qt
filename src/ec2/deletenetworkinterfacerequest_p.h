// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEREQUEST_P_H
#define QTAWS_DELETENETWORKINTERFACEREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinterfacerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfaceRequest;

class DeleteNetworkInterfaceRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInterfaceRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInterfaceRequest * const q);
    DeleteNetworkInterfaceRequestPrivate(const DeleteNetworkInterfaceRequestPrivate &other,
                                   DeleteNetworkInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
